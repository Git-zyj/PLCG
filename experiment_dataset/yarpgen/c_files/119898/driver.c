#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7042424690673628356LL;
unsigned char var_3 = (unsigned char)227;
signed char var_5 = (signed char)-38;
unsigned short var_6 = (unsigned short)59694;
int zero = 0;
unsigned short var_10 = (unsigned short)51509;
unsigned char var_11 = (unsigned char)22;
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
