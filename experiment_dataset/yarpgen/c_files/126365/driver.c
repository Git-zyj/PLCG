#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)91;
unsigned long long int var_2 = 16872599002155447249ULL;
unsigned short var_7 = (unsigned short)47242;
unsigned long long int var_9 = 7429396989150301515ULL;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)165;
int zero = 0;
long long int var_14 = -3046343620884245054LL;
unsigned char var_15 = (unsigned char)77;
void init() {
}

void checksum() {
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
