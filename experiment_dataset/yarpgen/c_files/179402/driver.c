#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 1698197650832549219LL;
short var_6 = (short)-3674;
unsigned short var_13 = (unsigned short)62457;
int zero = 0;
int var_20 = 1858806077;
unsigned long long int var_21 = 777123925069370433ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
