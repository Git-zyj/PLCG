#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 484100446;
unsigned long long int var_4 = 10973387072348152226ULL;
unsigned char var_6 = (unsigned char)27;
unsigned char var_8 = (unsigned char)165;
unsigned char var_9 = (unsigned char)239;
int var_11 = 1849927848;
int zero = 0;
signed char var_12 = (signed char)26;
unsigned char var_13 = (unsigned char)195;
unsigned short var_14 = (unsigned short)29106;
unsigned short var_15 = (unsigned short)51952;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
