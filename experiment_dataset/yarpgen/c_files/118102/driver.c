#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3678779491287370599LL;
short var_3 = (short)-12734;
long long int var_5 = 7499819108604434498LL;
unsigned char var_9 = (unsigned char)156;
long long int var_10 = 7156523045115636547LL;
int var_11 = 1248102723;
int zero = 0;
long long int var_12 = -8134475724334994433LL;
unsigned char var_13 = (unsigned char)218;
unsigned short var_14 = (unsigned short)2191;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
