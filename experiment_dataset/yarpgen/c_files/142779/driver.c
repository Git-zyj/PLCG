#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6107312701389402075LL;
unsigned long long int var_3 = 12322412740886055573ULL;
long long int var_7 = -1921687396891468217LL;
int var_8 = 1121863330;
unsigned long long int var_9 = 6891423497372848963ULL;
long long int var_14 = 7655017270316596748LL;
int zero = 0;
long long int var_17 = 2304827357218532401LL;
unsigned long long int var_18 = 3327522278098681555ULL;
long long int var_19 = -3151393830719924077LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
