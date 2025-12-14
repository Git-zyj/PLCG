#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)212;
_Bool var_3 = (_Bool)0;
int var_5 = 2141663898;
unsigned long long int var_6 = 13379705799316092418ULL;
_Bool var_7 = (_Bool)1;
short var_9 = (short)-11140;
int zero = 0;
int var_10 = -927214444;
unsigned int var_11 = 2344798367U;
unsigned char var_12 = (unsigned char)145;
unsigned long long int var_13 = 12770937616730869996ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
