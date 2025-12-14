#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 3826801207959790293LL;
unsigned short var_6 = (unsigned short)54268;
signed char var_10 = (signed char)-66;
signed char var_14 = (signed char)-60;
long long int var_15 = 2001025566342901777LL;
int var_17 = -1843707120;
int zero = 0;
int var_19 = -1508539025;
unsigned char var_20 = (unsigned char)94;
unsigned char var_21 = (unsigned char)15;
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
