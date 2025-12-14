#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6926889511502191214LL;
unsigned long long int var_2 = 11200729165443458465ULL;
short var_4 = (short)-26421;
signed char var_5 = (signed char)-95;
int var_6 = 1835866870;
unsigned short var_8 = (unsigned short)228;
unsigned char var_11 = (unsigned char)141;
int var_13 = 617045504;
int zero = 0;
long long int var_15 = -5897244661064255033LL;
unsigned char var_16 = (unsigned char)237;
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
