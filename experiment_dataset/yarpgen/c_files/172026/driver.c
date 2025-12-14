#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)228;
unsigned char var_3 = (unsigned char)146;
unsigned long long int var_10 = 6560440802711500236ULL;
signed char var_11 = (signed char)-11;
int zero = 0;
int var_12 = 1004674039;
int var_13 = 1716749244;
short var_14 = (short)-9928;
int var_15 = -1473081032;
short var_16 = (short)-4062;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
