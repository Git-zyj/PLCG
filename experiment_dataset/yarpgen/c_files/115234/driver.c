#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15025925386019287431ULL;
long long int var_6 = -3880524656761634826LL;
long long int var_8 = 6512190578909190844LL;
short var_12 = (short)4346;
short var_14 = (short)9120;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-100;
unsigned int var_18 = 3840494396U;
void init() {
}

void checksum() {
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
