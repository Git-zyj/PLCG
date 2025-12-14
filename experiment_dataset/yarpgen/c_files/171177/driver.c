#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 69641614;
unsigned char var_2 = (unsigned char)91;
unsigned long long int var_7 = 11914340236456199614ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_12 = 45066038383099370LL;
_Bool var_13 = (_Bool)1;
int var_14 = 918116684;
unsigned long long int var_15 = 14390569596962392732ULL;
int var_16 = -1731567624;
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
