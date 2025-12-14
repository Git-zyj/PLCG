#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4034583202U;
unsigned long long int var_4 = 14507454668851473572ULL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_15 = 9162547448268006974ULL;
int zero = 0;
long long int var_16 = -8611062289408841489LL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
