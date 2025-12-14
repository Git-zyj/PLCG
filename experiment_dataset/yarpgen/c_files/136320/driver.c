#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16205363247834264046ULL;
unsigned long long int var_2 = 8254070554083046339ULL;
unsigned char var_4 = (unsigned char)125;
unsigned int var_10 = 2759291336U;
unsigned int var_11 = 2548727931U;
unsigned char var_15 = (unsigned char)12;
unsigned int var_17 = 3014280239U;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 10967254520663435978ULL;
unsigned int var_20 = 2441206797U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
