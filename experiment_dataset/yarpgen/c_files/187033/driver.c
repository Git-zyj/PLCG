#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)10965;
short var_7 = (short)-18177;
unsigned long long int var_12 = 14627131174618910674ULL;
int zero = 0;
signed char var_15 = (signed char)74;
unsigned char var_16 = (unsigned char)21;
unsigned char var_17 = (unsigned char)212;
short var_18 = (short)26245;
unsigned long long int var_19 = 16295952444416119423ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
