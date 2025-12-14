#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14732545299450679645ULL;
int var_3 = 608941662;
long long int var_6 = 4914372849258454942LL;
unsigned char var_16 = (unsigned char)162;
int zero = 0;
unsigned char var_17 = (unsigned char)48;
unsigned short var_18 = (unsigned short)26409;
signed char var_19 = (signed char)-112;
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
