#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4235563190548942741LL;
signed char var_5 = (signed char)49;
signed char var_6 = (signed char)126;
signed char var_8 = (signed char)-38;
unsigned short var_9 = (unsigned short)56764;
unsigned short var_12 = (unsigned short)55433;
int zero = 0;
unsigned short var_14 = (unsigned short)556;
unsigned char var_15 = (unsigned char)181;
short var_16 = (short)404;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
