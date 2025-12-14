#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)32489;
unsigned char var_7 = (unsigned char)179;
long long int var_9 = -7335777842567799834LL;
unsigned short var_13 = (unsigned short)19251;
int zero = 0;
unsigned short var_15 = (unsigned short)31945;
short var_16 = (short)-5066;
void init() {
}

void checksum() {
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
