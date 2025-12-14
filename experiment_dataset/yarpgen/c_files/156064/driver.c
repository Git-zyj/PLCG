#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -363913805;
unsigned long long int var_3 = 8843271218348540931ULL;
int var_5 = -1000830787;
_Bool var_7 = (_Bool)0;
int var_9 = -1545193621;
unsigned char var_11 = (unsigned char)32;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)157;
unsigned short var_15 = (unsigned short)17366;
unsigned int var_16 = 3713763015U;
unsigned short var_17 = (unsigned short)60187;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
