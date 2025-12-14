#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)72;
long long int var_3 = 3099418353470116861LL;
unsigned char var_9 = (unsigned char)232;
short var_10 = (short)-27730;
int zero = 0;
unsigned int var_20 = 1879462365U;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)35714;
int var_23 = -716513764;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
