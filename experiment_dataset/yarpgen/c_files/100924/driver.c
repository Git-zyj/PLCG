#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64672;
int var_3 = -2101772441;
unsigned char var_6 = (unsigned char)23;
unsigned long long int var_15 = 1213720077137127855ULL;
unsigned char var_16 = (unsigned char)146;
unsigned short var_18 = (unsigned short)44432;
int zero = 0;
unsigned char var_20 = (unsigned char)104;
unsigned char var_21 = (unsigned char)188;
int var_22 = -1576413953;
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
