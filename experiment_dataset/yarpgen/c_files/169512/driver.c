#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)8663;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)45992;
unsigned short var_4 = (unsigned short)44022;
unsigned char var_7 = (unsigned char)199;
unsigned char var_9 = (unsigned char)137;
unsigned char var_11 = (unsigned char)18;
unsigned int var_13 = 4112117374U;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = -8047946850703181308LL;
short var_19 = (short)-19757;
short var_20 = (short)10100;
unsigned long long int var_21 = 10963585283442387193ULL;
unsigned int var_22 = 744714153U;
unsigned short var_23 = (unsigned short)16189;
unsigned short var_24 = (unsigned short)55517;
long long int arr_0 [10] ;
unsigned short arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -5378113843636722000LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)20725;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
