#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 2943698503027485637ULL;
unsigned long long int var_6 = 4763820780896690621ULL;
signed char var_7 = (signed char)-108;
long long int var_8 = -3670062072280417250LL;
long long int var_10 = 8612261818999234004LL;
unsigned char var_12 = (unsigned char)10;
int zero = 0;
short var_16 = (short)31405;
long long int var_17 = -792719133134443224LL;
unsigned int var_18 = 3637208672U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
