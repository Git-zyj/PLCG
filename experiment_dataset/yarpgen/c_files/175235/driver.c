#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)6936;
long long int var_5 = -571293026937386324LL;
long long int var_8 = 9176775628237318836LL;
short var_10 = (short)2375;
unsigned char var_19 = (unsigned char)71;
int zero = 0;
long long int var_20 = -1484091998159794454LL;
long long int var_21 = 4150901745084004733LL;
long long int var_22 = 8541822489423577828LL;
signed char var_23 = (signed char)-99;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
