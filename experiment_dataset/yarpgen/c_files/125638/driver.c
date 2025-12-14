#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7053743152467992709LL;
unsigned int var_5 = 2131322217U;
long long int var_6 = -299199582285586129LL;
unsigned long long int var_7 = 2770516053630029404ULL;
int var_9 = -417320192;
short var_12 = (short)26562;
int zero = 0;
unsigned int var_17 = 2512188349U;
long long int var_18 = -5094621540578727343LL;
void init() {
}

void checksum() {
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
