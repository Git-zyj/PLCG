#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5947463159058715514LL;
long long int var_2 = -5944349108594025041LL;
signed char var_5 = (signed char)-16;
signed char var_8 = (signed char)93;
unsigned long long int var_9 = 271923327179871228ULL;
signed char var_11 = (signed char)-22;
unsigned long long int var_12 = 11921107869031053417ULL;
int zero = 0;
unsigned long long int var_15 = 11837024755902767864ULL;
unsigned short var_16 = (unsigned short)50034;
long long int var_17 = -8390122519394521493LL;
unsigned short var_18 = (unsigned short)65047;
unsigned long long int var_19 = 1654444508009398793ULL;
unsigned long long int var_20 = 8215643581068835132ULL;
long long int var_21 = 4680555549542933863LL;
unsigned long long int arr_0 [12] ;
unsigned long long int arr_2 [12] [12] ;
unsigned long long int arr_5 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1175180911948684538ULL : 9319434803734505196ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 5682948436011913077ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 3310487718313622329ULL : 8003612713907064143ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
