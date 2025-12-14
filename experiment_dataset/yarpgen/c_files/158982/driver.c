#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-7301;
short var_2 = (short)-25032;
long long int var_5 = -1906711747655959281LL;
int var_9 = 844687979;
int zero = 0;
unsigned short var_10 = (unsigned short)28506;
signed char var_11 = (signed char)-121;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
