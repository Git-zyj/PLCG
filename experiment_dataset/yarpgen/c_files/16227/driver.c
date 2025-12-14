#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17067;
short var_3 = (short)-15087;
signed char var_6 = (signed char)-74;
unsigned long long int var_9 = 6901287887012601569ULL;
int zero = 0;
short var_11 = (short)15214;
int var_12 = 236232166;
short var_13 = (short)15681;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
