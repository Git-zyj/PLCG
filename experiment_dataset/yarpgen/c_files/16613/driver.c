#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-112;
signed char var_6 = (signed char)-44;
signed char var_10 = (signed char)67;
short var_13 = (short)21010;
int zero = 0;
signed char var_17 = (signed char)13;
long long int var_18 = -3369960551922366038LL;
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
