#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)50757;
unsigned char var_8 = (unsigned char)157;
unsigned long long int var_9 = 14987855715265738270ULL;
int zero = 0;
short var_18 = (short)24990;
int var_19 = 200143054;
unsigned short var_20 = (unsigned short)12219;
unsigned short var_21 = (unsigned short)32956;
unsigned char var_22 = (unsigned char)226;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
