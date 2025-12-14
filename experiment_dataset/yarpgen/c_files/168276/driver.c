#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13733486463052947031ULL;
_Bool var_1 = (_Bool)0;
int var_2 = 465267635;
unsigned int var_3 = 2266935303U;
short var_4 = (short)-7379;
short var_5 = (short)-26886;
long long int var_8 = 3844153696675265291LL;
int var_9 = -863390399;
int zero = 0;
long long int var_10 = 1559915484844751754LL;
int var_11 = -2136322122;
unsigned long long int var_12 = 10954881619205731718ULL;
unsigned char var_13 = (unsigned char)103;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
