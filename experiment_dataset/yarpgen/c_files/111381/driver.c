#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
short var_13 = (short)-13034;
long long int var_15 = 5817273048473538158LL;
int zero = 0;
long long int var_19 = 4697394067249527696LL;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)176;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
