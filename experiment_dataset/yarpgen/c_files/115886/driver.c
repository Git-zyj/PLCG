#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)1216;
signed char var_6 = (signed char)106;
int var_13 = -673692911;
unsigned short var_15 = (unsigned short)16611;
int zero = 0;
int var_18 = 1239100932;
int var_19 = 285130676;
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
