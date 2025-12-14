#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19496;
unsigned short var_5 = (unsigned short)36282;
unsigned char var_14 = (unsigned char)194;
int zero = 0;
short var_18 = (short)1924;
unsigned char var_19 = (unsigned char)117;
unsigned char var_20 = (unsigned char)106;
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
