#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -765137122;
unsigned int var_6 = 3121121166U;
_Bool var_8 = (_Bool)1;
signed char var_15 = (signed char)35;
int zero = 0;
long long int var_20 = 2265239852420186652LL;
signed char var_21 = (signed char)125;
int var_22 = 912815572;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
