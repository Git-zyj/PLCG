#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1838004178;
unsigned char var_7 = (unsigned char)83;
unsigned short var_8 = (unsigned short)178;
unsigned short var_9 = (unsigned short)52540;
int zero = 0;
short var_11 = (short)8163;
long long int var_12 = 6950127501246653492LL;
unsigned int var_13 = 2768047940U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
