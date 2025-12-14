#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)55108;
unsigned short var_12 = (unsigned short)15661;
unsigned short var_13 = (unsigned short)21523;
unsigned short var_18 = (unsigned short)27697;
int zero = 0;
unsigned short var_20 = (unsigned short)43915;
unsigned short var_21 = (unsigned short)60661;
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
