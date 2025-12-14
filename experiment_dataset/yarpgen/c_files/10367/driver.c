#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned int var_5 = 3292582745U;
unsigned int var_7 = 1044470334U;
long long int var_8 = -1103360157658995116LL;
unsigned int var_9 = 665990036U;
int zero = 0;
unsigned char var_14 = (unsigned char)140;
long long int var_15 = -5703433396976966949LL;
unsigned int var_16 = 4175305696U;
unsigned int var_17 = 1385043922U;
long long int var_18 = -3144804581198001857LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
