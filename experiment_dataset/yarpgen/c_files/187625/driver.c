#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8458074331576818980LL;
unsigned int var_1 = 1828485067U;
short var_2 = (short)7497;
_Bool var_12 = (_Bool)1;
int var_13 = -1326024239;
int zero = 0;
unsigned int var_15 = 53051530U;
_Bool var_16 = (_Bool)0;
long long int var_17 = -2888230471667681670LL;
long long int var_18 = 4265126023167334814LL;
unsigned short var_19 = (unsigned short)50740;
long long int var_20 = -7460398852112343570LL;
long long int var_21 = 7136095582633574260LL;
unsigned long long int arr_1 [22] ;
int arr_3 [22] [22] [22] ;
signed char arr_9 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 11799148637711437158ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1871453637 : 1866055131;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (signed char)-5;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
