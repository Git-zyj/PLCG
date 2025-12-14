#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)174;
unsigned long long int var_3 = 3558194150272190673ULL;
unsigned char var_9 = (unsigned char)60;
unsigned char var_19 = (unsigned char)210;
int zero = 0;
int var_20 = 624431473;
int var_21 = -1625828103;
int var_22 = -1208357870;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
