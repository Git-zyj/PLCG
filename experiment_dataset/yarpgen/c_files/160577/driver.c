#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)37845;
unsigned char var_5 = (unsigned char)158;
unsigned short var_7 = (unsigned short)47757;
short var_9 = (short)-28113;
unsigned short var_10 = (unsigned short)22256;
unsigned char var_16 = (unsigned char)173;
int zero = 0;
unsigned long long int var_18 = 15940656961703074333ULL;
long long int var_19 = 9040359679384208135LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
