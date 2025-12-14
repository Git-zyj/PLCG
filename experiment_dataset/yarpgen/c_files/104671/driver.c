#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-25;
_Bool var_8 = (_Bool)0;
int var_10 = -1279806675;
short var_13 = (short)-31682;
int zero = 0;
signed char var_14 = (signed char)-44;
int var_15 = -1615702607;
int var_16 = 992519248;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
