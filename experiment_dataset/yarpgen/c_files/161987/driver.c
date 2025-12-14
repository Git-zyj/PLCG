#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)3851;
short var_7 = (short)-12100;
_Bool var_9 = (_Bool)0;
int var_12 = 1265397781;
int zero = 0;
unsigned int var_13 = 3402855220U;
unsigned char var_14 = (unsigned char)177;
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
