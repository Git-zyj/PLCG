#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 642214064;
unsigned short var_1 = (unsigned short)43806;
int var_3 = 548237508;
int var_6 = -276677492;
int var_7 = 958974619;
unsigned char var_9 = (unsigned char)13;
int zero = 0;
unsigned char var_10 = (unsigned char)176;
signed char var_11 = (signed char)7;
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
