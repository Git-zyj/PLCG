#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)45178;
long long int var_11 = -9215738503957260411LL;
long long int var_12 = -4851770452694906022LL;
int zero = 0;
long long int var_14 = 7284463930032855692LL;
int var_15 = -470588174;
int var_16 = 564050971;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
