#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 185685904;
unsigned short var_8 = (unsigned short)64143;
int zero = 0;
long long int var_20 = -5145730289124934026LL;
unsigned char var_21 = (unsigned char)106;
unsigned int var_22 = 3581393640U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
