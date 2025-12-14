#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7694517143985746184ULL;
unsigned long long int var_4 = 8292284321970580559ULL;
unsigned char var_5 = (unsigned char)70;
int var_8 = -743094344;
int var_14 = -344658298;
int zero = 0;
unsigned long long int var_16 = 12923528869937558030ULL;
signed char var_17 = (signed char)-127;
void init() {
}

void checksum() {
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
