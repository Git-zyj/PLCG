#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-121;
long long int var_6 = -8939538965937644548LL;
int var_13 = 89256213;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-47;
int var_18 = 2129922512;
long long int var_19 = 1318673646671377392LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
