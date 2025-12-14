#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)81;
unsigned int var_3 = 1048257798U;
unsigned short var_4 = (unsigned short)22218;
int zero = 0;
short var_12 = (short)-26940;
unsigned long long int var_13 = 9389464735320546254ULL;
unsigned char var_14 = (unsigned char)242;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
