#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 295613446128333672LL;
long long int var_1 = -7163465955879404561LL;
unsigned short var_5 = (unsigned short)47897;
unsigned short var_9 = (unsigned short)3939;
int zero = 0;
unsigned char var_11 = (unsigned char)59;
unsigned short var_12 = (unsigned short)7743;
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
