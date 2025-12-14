#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)7986;
unsigned long long int var_5 = 16819914242804586272ULL;
unsigned short var_6 = (unsigned short)24114;
short var_12 = (short)27494;
int zero = 0;
unsigned char var_13 = (unsigned char)224;
unsigned short var_14 = (unsigned short)54648;
void init() {
}

void checksum() {
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
