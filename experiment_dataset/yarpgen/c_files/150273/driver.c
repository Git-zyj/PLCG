#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6230813798843575212ULL;
short var_5 = (short)-4736;
unsigned char var_11 = (unsigned char)137;
unsigned char var_12 = (unsigned char)73;
short var_16 = (short)-15341;
int zero = 0;
unsigned long long int var_18 = 8202349752898887588ULL;
unsigned short var_19 = (unsigned short)58194;
unsigned char var_20 = (unsigned char)90;
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
