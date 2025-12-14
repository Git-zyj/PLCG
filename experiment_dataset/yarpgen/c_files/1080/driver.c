#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)37951;
signed char var_7 = (signed char)-81;
signed char var_10 = (signed char)-83;
unsigned short var_11 = (unsigned short)16764;
_Bool var_13 = (_Bool)0;
long long int var_14 = -8891581112682388294LL;
int zero = 0;
signed char var_20 = (signed char)-112;
long long int var_21 = 1946041732214808166LL;
long long int var_22 = -1583589329857425965LL;
long long int var_23 = -5591431550238941093LL;
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
