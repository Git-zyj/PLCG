#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 9753980;
_Bool var_6 = (_Bool)0;
int zero = 0;
short var_12 = (short)1536;
unsigned short var_13 = (unsigned short)24050;
short var_14 = (short)26690;
unsigned short var_15 = (unsigned short)55443;
unsigned char var_16 = (unsigned char)138;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
