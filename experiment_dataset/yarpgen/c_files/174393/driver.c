#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)7215;
unsigned short var_5 = (unsigned short)32698;
unsigned short var_7 = (unsigned short)54642;
unsigned short var_10 = (unsigned short)17781;
unsigned short var_15 = (unsigned short)54441;
int zero = 0;
unsigned short var_17 = (unsigned short)55963;
unsigned short var_18 = (unsigned short)50977;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
