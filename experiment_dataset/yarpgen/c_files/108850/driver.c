#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1103490414;
unsigned char var_2 = (unsigned char)179;
unsigned char var_3 = (unsigned char)193;
unsigned char var_5 = (unsigned char)63;
unsigned long long int var_9 = 17740578328484985159ULL;
signed char var_10 = (signed char)60;
int zero = 0;
short var_11 = (short)-25748;
short var_12 = (short)-11934;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
