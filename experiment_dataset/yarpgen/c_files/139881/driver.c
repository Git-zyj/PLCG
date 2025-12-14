#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1076455236;
short var_6 = (short)26008;
unsigned short var_7 = (unsigned short)45429;
long long int var_9 = -8251425782258438703LL;
signed char var_13 = (signed char)-108;
int zero = 0;
unsigned char var_14 = (unsigned char)69;
unsigned long long int var_15 = 6206383641312624461ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
