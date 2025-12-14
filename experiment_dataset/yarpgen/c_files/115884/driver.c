#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)3414;
unsigned long long int var_8 = 6611463286455653358ULL;
unsigned long long int var_10 = 2334892499146714235ULL;
unsigned long long int var_12 = 13199290901959254012ULL;
unsigned long long int var_15 = 10014887634666843626ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)196;
short var_19 = (short)-28485;
signed char var_20 = (signed char)-105;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
