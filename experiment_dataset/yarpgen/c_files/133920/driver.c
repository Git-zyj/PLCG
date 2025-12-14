#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7393308446878276474LL;
unsigned short var_2 = (unsigned short)15388;
unsigned short var_5 = (unsigned short)25748;
long long int var_9 = 1204673536444998690LL;
unsigned int var_14 = 1972135210U;
int zero = 0;
short var_20 = (short)-12850;
unsigned long long int var_21 = 11512383495230142562ULL;
unsigned long long int var_22 = 15275567105632196300ULL;
unsigned short var_23 = (unsigned short)46840;
long long int var_24 = -1313683560120834853LL;
int var_25 = 1803022575;
int arr_13 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = 1805012228;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
