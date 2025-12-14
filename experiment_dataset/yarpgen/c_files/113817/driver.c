#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)206;
short var_3 = (short)23937;
unsigned long long int var_4 = 10983610860741375893ULL;
long long int var_6 = 576608694880945283LL;
int zero = 0;
int var_11 = -48395055;
unsigned short var_12 = (unsigned short)18650;
unsigned int var_13 = 960849228U;
int var_14 = 1455191945;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
