#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6517673696314581105LL;
long long int var_1 = 8295992785526928116LL;
int var_4 = -1276401397;
long long int var_5 = -8149984456165756538LL;
int var_6 = -1485897623;
unsigned char var_7 = (unsigned char)44;
int var_8 = -1070100858;
int zero = 0;
int var_10 = -1030208875;
int var_11 = 69896015;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
