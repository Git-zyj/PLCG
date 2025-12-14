#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)113;
short var_4 = (short)861;
unsigned long long int var_8 = 11785925237719972369ULL;
int var_11 = -1436684321;
unsigned short var_13 = (unsigned short)38803;
unsigned short var_15 = (unsigned short)14973;
signed char var_19 = (signed char)-29;
int zero = 0;
unsigned int var_20 = 2215256854U;
unsigned char var_21 = (unsigned char)203;
signed char var_22 = (signed char)119;
unsigned short var_23 = (unsigned short)44302;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
