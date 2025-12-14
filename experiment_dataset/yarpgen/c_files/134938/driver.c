#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)125;
short var_6 = (short)-25372;
int var_7 = 24495310;
unsigned long long int var_13 = 1332843882827770898ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-8458;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
