#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)34258;
int var_3 = -253637233;
unsigned short var_4 = (unsigned short)42855;
signed char var_5 = (signed char)36;
unsigned short var_7 = (unsigned short)31945;
unsigned char var_11 = (unsigned char)195;
int zero = 0;
long long int var_12 = -4832737097668332632LL;
unsigned char var_13 = (unsigned char)180;
int var_14 = 1515247859;
unsigned short var_15 = (unsigned short)39721;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
