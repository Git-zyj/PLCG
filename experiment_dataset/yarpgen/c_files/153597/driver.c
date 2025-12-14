#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_2 = (unsigned short)61544;
unsigned int var_3 = 698954022U;
short var_8 = (short)-25374;
unsigned int var_9 = 365644855U;
long long int var_12 = -4933026147951889927LL;
int zero = 0;
unsigned long long int var_14 = 8367047999972235780ULL;
short var_15 = (short)-18025;
void init() {
}

void checksum() {
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
