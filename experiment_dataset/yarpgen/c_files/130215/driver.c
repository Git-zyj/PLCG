#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)187;
int var_6 = -1388413689;
unsigned char var_7 = (unsigned char)15;
long long int var_9 = -787185980249377526LL;
unsigned char var_10 = (unsigned char)93;
int zero = 0;
unsigned long long int var_11 = 17968209342998994656ULL;
unsigned char var_12 = (unsigned char)154;
unsigned char var_13 = (unsigned char)76;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
