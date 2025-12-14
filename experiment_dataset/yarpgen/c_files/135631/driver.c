#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17020865317177845937ULL;
_Bool var_2 = (_Bool)0;
int var_5 = -820765033;
short var_11 = (short)23054;
int zero = 0;
int var_12 = -80805690;
signed char var_13 = (signed char)80;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
