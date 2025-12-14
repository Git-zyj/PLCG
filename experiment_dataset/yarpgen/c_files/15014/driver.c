#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-11909;
short var_5 = (short)26984;
short var_8 = (short)-28920;
short var_9 = (short)-3901;
short var_11 = (short)-26291;
short var_12 = (short)21;
short var_14 = (short)28107;
int zero = 0;
short var_15 = (short)22907;
short var_16 = (short)7138;
short var_17 = (short)-169;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
