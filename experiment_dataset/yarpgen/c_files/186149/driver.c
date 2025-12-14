#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)3695;
signed char var_5 = (signed char)-7;
signed char var_6 = (signed char)-109;
int zero = 0;
unsigned short var_10 = (unsigned short)56459;
short var_11 = (short)-25716;
unsigned char var_12 = (unsigned char)138;
signed char var_13 = (signed char)-57;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
