#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64348;
signed char var_1 = (signed char)22;
unsigned short var_5 = (unsigned short)40747;
long long int var_11 = -8579820389420244824LL;
unsigned long long int var_13 = 14796241007438795001ULL;
unsigned int var_14 = 923822484U;
long long int var_17 = 6117873491957701879LL;
int zero = 0;
long long int var_18 = 9012124570176431053LL;
int var_19 = -1806677538;
unsigned char var_20 = (unsigned char)144;
unsigned long long int var_21 = 1218504099853091592ULL;
signed char var_22 = (signed char)11;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
