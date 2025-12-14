#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 601881899U;
unsigned int var_4 = 2355645098U;
unsigned int var_5 = 2676237351U;
unsigned char var_6 = (unsigned char)23;
unsigned int var_9 = 3453940503U;
unsigned int var_10 = 2068320773U;
int zero = 0;
unsigned int var_11 = 163550734U;
unsigned int var_12 = 3633376761U;
unsigned int var_13 = 1401739370U;
unsigned char var_14 = (unsigned char)126;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
