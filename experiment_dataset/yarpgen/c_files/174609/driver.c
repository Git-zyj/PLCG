#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)189;
unsigned char var_2 = (unsigned char)196;
unsigned char var_5 = (unsigned char)78;
int var_7 = 1453973293;
unsigned char var_8 = (unsigned char)98;
unsigned char var_9 = (unsigned char)196;
unsigned long long int var_13 = 14121362029444500405ULL;
unsigned char var_14 = (unsigned char)2;
unsigned char var_15 = (unsigned char)33;
int zero = 0;
long long int var_18 = -3302712606878218082LL;
unsigned long long int var_19 = 8960935995397302410ULL;
unsigned char var_20 = (unsigned char)46;
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
