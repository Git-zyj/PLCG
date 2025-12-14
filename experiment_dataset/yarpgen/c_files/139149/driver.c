#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11271;
unsigned char var_1 = (unsigned char)171;
long long int var_4 = 2230410506419838490LL;
unsigned long long int var_5 = 14294599019121485807ULL;
int var_10 = -907922272;
unsigned short var_12 = (unsigned short)36283;
int var_13 = 469852397;
unsigned long long int var_15 = 17826454266869609957ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)6593;
unsigned short var_17 = (unsigned short)5226;
signed char var_18 = (signed char)-113;
signed char var_19 = (signed char)-38;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
