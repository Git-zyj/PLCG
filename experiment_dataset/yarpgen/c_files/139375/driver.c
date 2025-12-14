#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)44030;
signed char var_11 = (signed char)-63;
unsigned short var_15 = (unsigned short)63590;
int zero = 0;
short var_18 = (short)13698;
unsigned char var_19 = (unsigned char)50;
unsigned char var_20 = (unsigned char)177;
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
