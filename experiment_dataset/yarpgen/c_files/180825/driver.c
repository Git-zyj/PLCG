#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-47;
unsigned char var_4 = (unsigned char)20;
unsigned short var_5 = (unsigned short)30830;
signed char var_6 = (signed char)-43;
unsigned short var_7 = (unsigned short)12617;
unsigned short var_9 = (unsigned short)14494;
int zero = 0;
long long int var_15 = -8886300091819460216LL;
signed char var_16 = (signed char)112;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
