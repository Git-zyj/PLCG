#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1925336091;
unsigned long long int var_6 = 14207530692986940472ULL;
signed char var_8 = (signed char)-100;
unsigned long long int var_14 = 11464747248610665001ULL;
long long int var_19 = -301533872172654135LL;
int zero = 0;
unsigned short var_20 = (unsigned short)1534;
unsigned short var_21 = (unsigned short)38161;
long long int var_22 = 1347705050472024084LL;
int var_23 = -2036241210;
short var_24 = (short)-2176;
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
