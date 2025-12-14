#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)242;
_Bool var_2 = (_Bool)1;
int var_3 = 1135772048;
unsigned char var_8 = (unsigned char)74;
unsigned char var_9 = (unsigned char)183;
int zero = 0;
int var_13 = 807347936;
unsigned short var_14 = (unsigned short)26103;
void init() {
}

void checksum() {
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
