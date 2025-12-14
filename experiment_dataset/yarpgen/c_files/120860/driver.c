#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)58;
short var_2 = (short)31869;
long long int var_3 = -6205098605877386142LL;
unsigned char var_6 = (unsigned char)242;
unsigned short var_7 = (unsigned short)58644;
int var_8 = -1199320149;
short var_9 = (short)16537;
int zero = 0;
int var_10 = -197115831;
unsigned long long int var_11 = 9297988933829128819ULL;
int var_12 = 895959865;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
