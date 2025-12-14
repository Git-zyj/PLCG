#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)174;
unsigned short var_6 = (unsigned short)33381;
unsigned char var_9 = (unsigned char)61;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)17;
int zero = 0;
unsigned char var_16 = (unsigned char)64;
unsigned char var_17 = (unsigned char)169;
unsigned short var_18 = (unsigned short)25916;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
