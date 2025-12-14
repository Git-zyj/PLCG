#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)59951;
unsigned short var_4 = (unsigned short)49858;
short var_7 = (short)30118;
short var_9 = (short)-16733;
int zero = 0;
unsigned short var_11 = (unsigned short)40930;
unsigned short var_12 = (unsigned short)60589;
unsigned short var_13 = (unsigned short)7454;
short var_14 = (short)32489;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
