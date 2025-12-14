#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 31164717;
long long int var_5 = -2167027579896121667LL;
int var_7 = -328924695;
unsigned short var_14 = (unsigned short)25392;
int zero = 0;
long long int var_18 = 6841463251807262977LL;
unsigned char var_19 = (unsigned char)154;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
