#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)19871;
short var_2 = (short)-25789;
signed char var_3 = (signed char)-83;
int var_4 = 1949290329;
short var_6 = (short)-15353;
signed char var_9 = (signed char)55;
int zero = 0;
unsigned long long int var_10 = 13821633203116668062ULL;
unsigned int var_11 = 3947150035U;
signed char var_12 = (signed char)-62;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
