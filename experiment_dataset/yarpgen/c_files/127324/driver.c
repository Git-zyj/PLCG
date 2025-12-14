#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)35;
_Bool var_7 = (_Bool)0;
unsigned char var_10 = (unsigned char)100;
unsigned long long int var_11 = 11710239144934718817ULL;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)27240;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)48;
void init() {
}

void checksum() {
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
