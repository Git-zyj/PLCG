#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-6;
unsigned long long int var_1 = 7541315554826514701ULL;
unsigned short var_3 = (unsigned short)9782;
long long int var_4 = 4983787320287596571LL;
short var_11 = (short)23101;
long long int var_14 = 5098624084919937832LL;
int zero = 0;
int var_17 = -1972317838;
unsigned char var_18 = (unsigned char)157;
void init() {
}

void checksum() {
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
