#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)72;
unsigned short var_8 = (unsigned short)65403;
long long int var_12 = 3731327134698588512LL;
int zero = 0;
unsigned long long int var_20 = 13319059129703017316ULL;
long long int var_21 = -6163116104616447351LL;
void init() {
}

void checksum() {
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
