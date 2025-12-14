#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)49;
signed char var_4 = (signed char)-53;
signed char var_8 = (signed char)-82;
signed char var_13 = (signed char)-110;
signed char var_14 = (signed char)-81;
signed char var_17 = (signed char)-114;
int zero = 0;
signed char var_19 = (signed char)70;
signed char var_20 = (signed char)13;
signed char var_21 = (signed char)11;
signed char var_22 = (signed char)116;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
