#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)254;
long long int var_3 = -5014939938241319673LL;
int var_6 = -979256185;
unsigned int var_7 = 3221135969U;
long long int var_8 = -3164389175173169016LL;
unsigned char var_9 = (unsigned char)119;
int var_10 = -91762521;
int zero = 0;
int var_13 = 1468080723;
unsigned int var_14 = 542427171U;
void init() {
}

void checksum() {
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
