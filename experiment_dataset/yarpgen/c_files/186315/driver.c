#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15076205512810820285ULL;
short var_15 = (short)-20356;
int zero = 0;
unsigned char var_18 = (unsigned char)100;
unsigned short var_19 = (unsigned short)44072;
short var_20 = (short)-21757;
signed char var_21 = (signed char)34;
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
