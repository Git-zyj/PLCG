#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)109;
int var_3 = -493140434;
long long int var_5 = -7370949279239646185LL;
unsigned char var_6 = (unsigned char)248;
unsigned int var_7 = 3266332752U;
unsigned char var_9 = (unsigned char)162;
unsigned char var_10 = (unsigned char)87;
unsigned long long int var_13 = 1703503311206790709ULL;
int var_15 = 1493830381;
unsigned short var_17 = (unsigned short)48832;
int zero = 0;
unsigned int var_18 = 3935825768U;
unsigned int var_19 = 284020621U;
unsigned long long int var_20 = 14706633043208882772ULL;
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
