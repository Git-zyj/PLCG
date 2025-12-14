#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36332;
long long int var_2 = 4555227945452760519LL;
short var_6 = (short)32600;
unsigned short var_7 = (unsigned short)48525;
short var_8 = (short)-11589;
unsigned short var_9 = (unsigned short)63100;
int zero = 0;
unsigned short var_10 = (unsigned short)10808;
unsigned char var_11 = (unsigned char)40;
int var_12 = -1553118160;
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
