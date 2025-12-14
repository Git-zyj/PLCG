#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)176;
int var_2 = -1991491023;
long long int var_3 = -5130283425569565663LL;
int var_4 = 87971129;
unsigned long long int var_9 = 15128284291154789454ULL;
long long int var_10 = 313759962170187048LL;
int zero = 0;
signed char var_12 = (signed char)-126;
unsigned char var_13 = (unsigned char)134;
signed char var_14 = (signed char)4;
int var_15 = -1515229517;
unsigned short var_16 = (unsigned short)3288;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
