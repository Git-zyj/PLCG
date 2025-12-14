#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40278;
unsigned char var_3 = (unsigned char)207;
int var_7 = -829745238;
unsigned short var_8 = (unsigned short)1383;
int var_11 = 242257422;
int var_16 = -1887391931;
int zero = 0;
signed char var_19 = (signed char)86;
short var_20 = (short)-6938;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
