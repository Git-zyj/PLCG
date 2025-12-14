#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)10103;
signed char var_5 = (signed char)105;
unsigned char var_6 = (unsigned char)104;
unsigned long long int var_8 = 3606310078671807848ULL;
unsigned long long int var_9 = 17010214993459819547ULL;
int zero = 0;
long long int var_10 = 4661330410748012272LL;
unsigned long long int var_11 = 8842097299740914960ULL;
unsigned long long int var_12 = 5537121225416542837ULL;
long long int var_13 = -5065979481188152059LL;
unsigned char arr_6 [17] ;
_Bool arr_7 [17] [17] ;
unsigned long long int arr_8 [17] ;
short arr_9 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (unsigned char)156;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 17435875291093901176ULL : 6126023562428717074ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)-15250 : (short)29395;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
