#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62857;
unsigned long long int var_4 = 13643136062881624923ULL;
unsigned long long int var_5 = 13572763684671036934ULL;
unsigned short var_7 = (unsigned short)4690;
unsigned short var_16 = (unsigned short)46013;
int zero = 0;
unsigned int var_18 = 505657493U;
unsigned char var_19 = (unsigned char)241;
unsigned long long int var_20 = 15632103989604055925ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
