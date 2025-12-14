#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-127;
long long int var_4 = 4485943043553291676LL;
long long int var_9 = 3753499821699206585LL;
long long int var_11 = 2382741396406730207LL;
long long int var_12 = -8862944968601712847LL;
long long int var_13 = -7703281801727283061LL;
int zero = 0;
unsigned short var_14 = (unsigned short)51323;
unsigned char var_15 = (unsigned char)36;
int var_16 = 933088452;
unsigned short var_17 = (unsigned short)40072;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
