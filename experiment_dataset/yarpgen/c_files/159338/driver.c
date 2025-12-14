#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18468;
unsigned long long int var_2 = 3687410983729682941ULL;
short var_3 = (short)7513;
int var_6 = -1151519873;
unsigned long long int var_11 = 2183054104548073884ULL;
int zero = 0;
unsigned long long int var_12 = 5400078972728251080ULL;
short var_13 = (short)-20;
unsigned long long int var_14 = 15667522226219548265ULL;
signed char var_15 = (signed char)-115;
short var_16 = (short)-29850;
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
