#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)208;
unsigned short var_1 = (unsigned short)26725;
unsigned int var_2 = 1185239723U;
short var_3 = (short)-25149;
int zero = 0;
unsigned short var_10 = (unsigned short)11809;
short var_11 = (short)-14963;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
