#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6297011307817634920LL;
unsigned char var_2 = (unsigned char)152;
long long int var_4 = -7890117179493316330LL;
unsigned short var_7 = (unsigned short)53383;
unsigned short var_8 = (unsigned short)47175;
signed char var_9 = (signed char)78;
int zero = 0;
int var_10 = -828226968;
unsigned char var_11 = (unsigned char)94;
unsigned char var_12 = (unsigned char)20;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
