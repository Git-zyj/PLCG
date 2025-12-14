#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-68;
signed char var_5 = (signed char)40;
short var_9 = (short)2704;
signed char var_15 = (signed char)83;
signed char var_16 = (signed char)7;
int zero = 0;
short var_20 = (short)18653;
short var_21 = (short)-12249;
short var_22 = (short)22907;
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
