#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-73;
_Bool var_2 = (_Bool)1;
_Bool var_5 = (_Bool)1;
long long int var_11 = 6059881597638642045LL;
unsigned short var_12 = (unsigned short)43189;
signed char var_17 = (signed char)92;
int zero = 0;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-13947;
void init() {
}

void checksum() {
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
