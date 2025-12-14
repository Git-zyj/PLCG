#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15260;
unsigned short var_2 = (unsigned short)11634;
signed char var_11 = (signed char)-47;
unsigned short var_13 = (unsigned short)65514;
int zero = 0;
unsigned long long int var_14 = 17096099997852817233ULL;
unsigned short var_15 = (unsigned short)19979;
unsigned char var_16 = (unsigned char)98;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
