#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -3436176532269449233LL;
unsigned int var_5 = 3784061022U;
int var_6 = -1245481168;
int zero = 0;
int var_17 = -1911820354;
unsigned char var_18 = (unsigned char)43;
unsigned short var_19 = (unsigned short)20127;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
