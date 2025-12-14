#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)123;
long long int var_3 = 2989997159300924895LL;
unsigned char var_6 = (unsigned char)113;
long long int var_8 = 8383586387040995714LL;
short var_17 = (short)22199;
unsigned char var_18 = (unsigned char)57;
int zero = 0;
int var_20 = -794895618;
short var_21 = (short)-25403;
void init() {
}

void checksum() {
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
