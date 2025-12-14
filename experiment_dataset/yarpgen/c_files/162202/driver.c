#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3172242071160045292ULL;
long long int var_2 = 4768817573944091562LL;
int var_4 = -1467535571;
unsigned long long int var_5 = 16337390157886511178ULL;
unsigned char var_7 = (unsigned char)202;
unsigned char var_9 = (unsigned char)52;
int zero = 0;
signed char var_12 = (signed char)-71;
unsigned short var_13 = (unsigned short)63817;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
