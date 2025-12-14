#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1695096985850115143LL;
unsigned long long int var_6 = 8884472855975072472ULL;
signed char var_8 = (signed char)-85;
signed char var_9 = (signed char)-122;
signed char var_11 = (signed char)-15;
unsigned int var_12 = 3564347546U;
int zero = 0;
signed char var_19 = (signed char)45;
unsigned int var_20 = 217768566U;
void init() {
}

void checksum() {
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
