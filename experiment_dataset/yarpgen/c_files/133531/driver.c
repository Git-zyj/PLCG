#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9465456035504008428ULL;
signed char var_4 = (signed char)-72;
unsigned short var_5 = (unsigned short)38716;
unsigned short var_17 = (unsigned short)22439;
int zero = 0;
unsigned long long int var_18 = 2636184157874293139ULL;
unsigned int var_19 = 418115581U;
unsigned short var_20 = (unsigned short)61969;
long long int var_21 = 8926931598583462325LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
