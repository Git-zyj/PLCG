#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3433788685U;
unsigned char var_5 = (unsigned char)85;
unsigned short var_9 = (unsigned short)23663;
int zero = 0;
unsigned int var_19 = 1017123710U;
unsigned char var_20 = (unsigned char)59;
unsigned short var_21 = (unsigned short)4854;
void init() {
}

void checksum() {
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
