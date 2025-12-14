#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52884;
int var_6 = -232517910;
int var_9 = 93417774;
_Bool var_13 = (_Bool)0;
unsigned short var_16 = (unsigned short)24103;
int zero = 0;
unsigned short var_17 = (unsigned short)31106;
unsigned char var_18 = (unsigned char)86;
long long int var_19 = -4368082603050270965LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
