#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31034;
short var_1 = (short)21774;
signed char var_3 = (signed char)36;
int var_4 = -1816034588;
unsigned short var_6 = (unsigned short)47649;
unsigned char var_9 = (unsigned char)211;
unsigned long long int var_12 = 14023574384195520729ULL;
signed char var_14 = (signed char)83;
long long int var_15 = 173322899514681909LL;
int var_17 = 2068596123;
int zero = 0;
int var_19 = 710520268;
unsigned short var_20 = (unsigned short)48165;
unsigned short var_21 = (unsigned short)24003;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
