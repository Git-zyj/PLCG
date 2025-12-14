#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)21600;
unsigned short var_6 = (unsigned short)545;
unsigned short var_7 = (unsigned short)15795;
unsigned short var_8 = (unsigned short)20315;
unsigned short var_9 = (unsigned short)54661;
unsigned short var_10 = (unsigned short)36550;
int zero = 0;
unsigned short var_12 = (unsigned short)51778;
unsigned short var_13 = (unsigned short)62614;
unsigned short var_14 = (unsigned short)62052;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
