#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 346762396U;
unsigned short var_7 = (unsigned short)9627;
short var_9 = (short)27014;
int zero = 0;
long long int var_11 = -3672813052413781933LL;
int var_12 = 709186813;
short var_13 = (short)-15423;
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
