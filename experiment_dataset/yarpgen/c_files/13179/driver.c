#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-2114;
_Bool var_6 = (_Bool)0;
unsigned char var_11 = (unsigned char)202;
int zero = 0;
unsigned int var_16 = 3325916624U;
unsigned int var_17 = 758090946U;
unsigned char var_18 = (unsigned char)34;
unsigned long long int var_19 = 6591163820859894184ULL;
void init() {
}

void checksum() {
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
