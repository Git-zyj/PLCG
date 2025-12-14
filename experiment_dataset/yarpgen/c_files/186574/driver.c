#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2409149184U;
unsigned char var_9 = (unsigned char)204;
short var_10 = (short)-4427;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 1092763071U;
long long int var_13 = -4690347362634707730LL;
unsigned char var_14 = (unsigned char)18;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
