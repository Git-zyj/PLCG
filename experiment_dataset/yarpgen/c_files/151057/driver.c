#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-9;
unsigned short var_9 = (unsigned short)20099;
_Bool var_10 = (_Bool)0;
long long int var_13 = 5090218760792144207LL;
int zero = 0;
long long int var_15 = -6317991689796307588LL;
short var_16 = (short)-15885;
int var_17 = -834026038;
short var_18 = (short)32688;
unsigned int var_19 = 2563073258U;
unsigned long long int var_20 = 13741080031669528272ULL;
short var_21 = (short)-5048;
_Bool var_22 = (_Bool)1;
int arr_1 [24] ;
short arr_2 [24] ;
long long int arr_3 [24] ;
unsigned long long int arr_10 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 1170397646;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)20550;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 2449977515279560788LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 6155906015132491832ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
