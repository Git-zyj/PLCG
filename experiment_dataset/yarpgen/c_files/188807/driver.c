#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5271502547138928384LL;
_Bool var_3 = (_Bool)0;
short var_9 = (short)18898;
long long int var_10 = -3752996549653848211LL;
long long int var_12 = 4820719635908458783LL;
unsigned short var_13 = (unsigned short)38220;
int zero = 0;
short var_14 = (short)6336;
short var_15 = (short)6346;
short var_16 = (short)21347;
unsigned long long int var_17 = 7100936279343391623ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
