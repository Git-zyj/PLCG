#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 620123969U;
long long int var_4 = -5685984638428156291LL;
long long int var_5 = 2597661063201239883LL;
long long int var_7 = -4170432933241269LL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 16305376099309687834ULL;
int zero = 0;
short var_12 = (short)-18497;
int var_13 = 2142520557;
unsigned char var_14 = (unsigned char)145;
unsigned long long int var_15 = 7843364919983014748ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
