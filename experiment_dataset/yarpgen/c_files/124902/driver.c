#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)37618;
int var_7 = 73691369;
int var_8 = -1826705738;
long long int var_9 = -8959726943323184845LL;
short var_13 = (short)9907;
unsigned short var_16 = (unsigned short)44906;
int zero = 0;
long long int var_20 = -1441168871090255165LL;
int var_21 = -2115082250;
int var_22 = -5260338;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
