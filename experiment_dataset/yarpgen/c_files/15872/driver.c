#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)136;
unsigned short var_3 = (unsigned short)27024;
unsigned short var_9 = (unsigned short)4526;
unsigned short var_11 = (unsigned short)39483;
int zero = 0;
unsigned short var_12 = (unsigned short)28475;
unsigned char var_13 = (unsigned char)31;
unsigned short var_14 = (unsigned short)141;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
