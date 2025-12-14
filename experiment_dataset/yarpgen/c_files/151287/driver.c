#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)252;
unsigned long long int var_4 = 2830157502955493573ULL;
int var_5 = -506234819;
long long int var_10 = 158345661553180789LL;
short var_15 = (short)-685;
short var_16 = (short)22281;
int zero = 0;
unsigned short var_20 = (unsigned short)808;
short var_21 = (short)-5677;
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
