#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -237050056;
unsigned short var_6 = (unsigned short)23829;
int var_10 = -1861397433;
signed char var_13 = (signed char)8;
unsigned short var_14 = (unsigned short)15734;
long long int var_16 = 8073209164857910834LL;
int zero = 0;
signed char var_19 = (signed char)19;
int var_20 = 2056406794;
unsigned char var_21 = (unsigned char)143;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
