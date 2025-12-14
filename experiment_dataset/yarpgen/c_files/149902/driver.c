#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2067093116;
unsigned short var_5 = (unsigned short)10247;
unsigned int var_11 = 953867489U;
unsigned int var_12 = 2560787397U;
int zero = 0;
unsigned int var_18 = 2351687050U;
unsigned char var_19 = (unsigned char)177;
unsigned int var_20 = 39490875U;
short var_21 = (short)-23547;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
