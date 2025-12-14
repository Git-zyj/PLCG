#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)38;
long long int var_4 = 252921700563665377LL;
unsigned short var_10 = (unsigned short)13075;
int zero = 0;
long long int var_12 = -7325801177456156774LL;
signed char var_13 = (signed char)-100;
void init() {
}

void checksum() {
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
