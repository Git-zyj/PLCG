#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)13229;
short var_17 = (short)-4121;
int zero = 0;
unsigned short var_19 = (unsigned short)46492;
unsigned char var_20 = (unsigned char)100;
int var_21 = -196541100;
unsigned short var_22 = (unsigned short)47126;
void init() {
}

void checksum() {
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
