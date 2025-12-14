#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)85;
short var_2 = (short)-27879;
unsigned char var_3 = (unsigned char)29;
unsigned short var_4 = (unsigned short)9316;
unsigned long long int var_5 = 17190222899047876034ULL;
long long int var_7 = 1881877721042366377LL;
short var_8 = (short)-28038;
int zero = 0;
unsigned short var_13 = (unsigned short)10388;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)19949;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
