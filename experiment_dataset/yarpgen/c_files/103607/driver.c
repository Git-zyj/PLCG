#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)61219;
unsigned int var_5 = 4229585320U;
unsigned long long int var_6 = 5537237345367230015ULL;
long long int var_7 = -8865665735348437263LL;
long long int var_10 = -8288553441914995392LL;
short var_12 = (short)25293;
int zero = 0;
short var_13 = (short)-19897;
short var_14 = (short)-11923;
unsigned long long int var_15 = 325819340314969851ULL;
unsigned int var_16 = 4041648300U;
unsigned long long int var_17 = 18409625428251128389ULL;
unsigned int var_18 = 3344696148U;
unsigned char var_19 = (unsigned char)245;
unsigned short arr_8 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)13283 : (unsigned short)30246;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
