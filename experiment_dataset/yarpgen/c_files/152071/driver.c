#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-95;
unsigned char var_5 = (unsigned char)129;
unsigned char var_6 = (unsigned char)193;
long long int var_10 = 7263396201807814347LL;
unsigned char var_16 = (unsigned char)213;
int zero = 0;
long long int var_20 = -1848297334581291087LL;
int var_21 = 1979118833;
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
