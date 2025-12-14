#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 3922652980U;
unsigned int var_3 = 194742206U;
short var_5 = (short)-24907;
signed char var_8 = (signed char)-68;
short var_11 = (short)23675;
int zero = 0;
unsigned int var_12 = 448676519U;
unsigned long long int var_13 = 16501819179157026571ULL;
unsigned int var_14 = 1712452386U;
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
