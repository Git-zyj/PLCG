#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-83;
int var_6 = -320050753;
unsigned char var_7 = (unsigned char)180;
int var_8 = 666992862;
unsigned char var_15 = (unsigned char)171;
unsigned char var_17 = (unsigned char)42;
unsigned int var_19 = 347274934U;
int zero = 0;
unsigned int var_20 = 2550333387U;
short var_21 = (short)13912;
signed char var_22 = (signed char)67;
short var_23 = (short)21446;
long long int var_24 = 1708153271187775946LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
