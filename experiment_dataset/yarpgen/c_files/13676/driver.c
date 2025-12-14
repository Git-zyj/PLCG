#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25079;
_Bool var_3 = (_Bool)0;
long long int var_5 = 5497183130898858952LL;
unsigned long long int var_6 = 4992191167573599378ULL;
short var_9 = (short)30064;
int zero = 0;
unsigned char var_12 = (unsigned char)62;
int var_13 = -1341916240;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-22341;
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
