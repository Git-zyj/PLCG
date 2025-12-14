#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4180738489U;
int var_3 = 1499514010;
unsigned char var_8 = (unsigned char)199;
long long int var_10 = 8993092609694941331LL;
int zero = 0;
signed char var_20 = (signed char)-57;
short var_21 = (short)-13027;
unsigned short var_22 = (unsigned short)58014;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
