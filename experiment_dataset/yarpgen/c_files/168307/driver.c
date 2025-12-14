#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)42;
unsigned long long int var_1 = 13752875531887899938ULL;
unsigned short var_2 = (unsigned short)61892;
unsigned long long int var_4 = 16138154118809962001ULL;
long long int var_5 = -7443821985687872888LL;
unsigned short var_7 = (unsigned short)52491;
short var_8 = (short)31147;
int zero = 0;
int var_10 = -850584019;
int var_11 = 656394221;
unsigned char var_12 = (unsigned char)34;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
