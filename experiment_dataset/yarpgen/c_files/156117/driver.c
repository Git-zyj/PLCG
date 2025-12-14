#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 714251373987874754LL;
int var_7 = -1077292900;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
int var_13 = 1932073505;
int zero = 0;
short var_14 = (short)6276;
int var_15 = -467255929;
unsigned long long int var_16 = 384314073592371626ULL;
void init() {
}

void checksum() {
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
