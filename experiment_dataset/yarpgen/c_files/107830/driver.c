#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -6744894810357750909LL;
unsigned long long int var_8 = 7509696973028616911ULL;
unsigned char var_9 = (unsigned char)85;
unsigned char var_12 = (unsigned char)121;
long long int var_15 = 4717627688121305501LL;
unsigned short var_16 = (unsigned short)6494;
unsigned int var_17 = 2506966029U;
int var_18 = 1340319917;
int zero = 0;
unsigned short var_19 = (unsigned short)1253;
unsigned int var_20 = 1436065719U;
long long int var_21 = 4114705812631739352LL;
int var_22 = 1843984430;
unsigned char var_23 = (unsigned char)95;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
