#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1526016862;
_Bool var_3 = (_Bool)0;
long long int var_4 = -6319885259481782425LL;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 3869734776U;
unsigned char var_11 = (unsigned char)94;
unsigned long long int var_12 = 8362520175251657864ULL;
unsigned char var_15 = (unsigned char)37;
int zero = 0;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
