#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)72;
unsigned char var_4 = (unsigned char)51;
unsigned long long int var_5 = 17513352049617964527ULL;
unsigned char var_10 = (unsigned char)39;
unsigned short var_11 = (unsigned short)54794;
int zero = 0;
short var_12 = (short)30571;
int var_13 = 575249790;
signed char var_14 = (signed char)-114;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
