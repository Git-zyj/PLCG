#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2252299223456755151ULL;
unsigned short var_3 = (unsigned short)38965;
long long int var_5 = 6275093048926629644LL;
unsigned int var_8 = 2313183129U;
int var_10 = -411740345;
short var_14 = (short)-30526;
unsigned short var_17 = (unsigned short)34864;
int zero = 0;
unsigned char var_18 = (unsigned char)14;
unsigned short var_19 = (unsigned short)64641;
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
