#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)13501;
unsigned char var_3 = (unsigned char)182;
int var_4 = -1632905592;
unsigned int var_6 = 3538723200U;
unsigned int var_7 = 3991408803U;
unsigned char var_9 = (unsigned char)6;
int zero = 0;
unsigned long long int var_10 = 6296702053770039998ULL;
int var_11 = 610724876;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
