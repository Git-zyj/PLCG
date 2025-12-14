#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)78;
signed char var_3 = (signed char)-87;
_Bool var_8 = (_Bool)1;
short var_12 = (short)14108;
long long int var_16 = 6326919327293267883LL;
int zero = 0;
short var_19 = (short)22355;
signed char var_20 = (signed char)-13;
long long int var_21 = 70994464555040299LL;
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
