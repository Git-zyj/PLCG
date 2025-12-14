#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 690458338;
unsigned long long int var_3 = 5374786122242374006ULL;
unsigned int var_4 = 1554374401U;
int var_5 = 886837191;
unsigned short var_6 = (unsigned short)62941;
unsigned int var_8 = 2109405545U;
unsigned long long int var_10 = 9205936012328738927ULL;
unsigned long long int var_11 = 16009757070398755513ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 341023181663467771ULL;
int var_15 = -1427424092;
unsigned short var_16 = (unsigned short)40810;
void init() {
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
