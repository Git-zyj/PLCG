#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10642654834221564047ULL;
unsigned long long int var_8 = 16513440668098451258ULL;
unsigned long long int var_11 = 18425567388310828907ULL;
int zero = 0;
unsigned long long int var_13 = 14929540581923201461ULL;
short var_14 = (short)-21251;
unsigned long long int var_15 = 1575596257001221896ULL;
unsigned short var_16 = (unsigned short)4479;
short arr_2 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (short)28062;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
