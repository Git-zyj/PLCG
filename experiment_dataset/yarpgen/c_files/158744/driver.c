#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10877;
signed char var_3 = (signed char)-73;
long long int var_5 = 6410467824637458164LL;
int zero = 0;
unsigned short var_11 = (unsigned short)14743;
unsigned long long int var_12 = 3497368816129603338ULL;
signed char var_13 = (signed char)-12;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
