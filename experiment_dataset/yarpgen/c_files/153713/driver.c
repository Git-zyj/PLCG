#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)225;
unsigned int var_6 = 958474222U;
short var_10 = (short)-703;
signed char var_11 = (signed char)46;
signed char var_15 = (signed char)88;
int zero = 0;
short var_18 = (short)-3350;
unsigned char var_19 = (unsigned char)15;
int var_20 = -941154036;
unsigned long long int var_21 = 12541304017770052386ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
