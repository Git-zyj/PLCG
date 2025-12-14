#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = 158702027;
signed char var_14 = (signed char)-9;
unsigned short var_15 = (unsigned short)52580;
int zero = 0;
unsigned char var_19 = (unsigned char)4;
_Bool var_20 = (_Bool)0;
long long int var_21 = 1831872322993547174LL;
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
