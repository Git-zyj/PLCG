#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)76;
short var_5 = (short)18982;
unsigned char var_7 = (unsigned char)77;
unsigned short var_11 = (unsigned short)54858;
int zero = 0;
long long int var_12 = -1387571008165468467LL;
unsigned short var_13 = (unsigned short)51611;
void init() {
}

void checksum() {
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
