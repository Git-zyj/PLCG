#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)121;
short var_3 = (short)681;
unsigned int var_4 = 3407109401U;
unsigned char var_6 = (unsigned char)146;
unsigned char var_8 = (unsigned char)211;
unsigned char var_9 = (unsigned char)31;
unsigned int var_10 = 3042020462U;
int zero = 0;
int var_12 = 1005282147;
short var_13 = (short)19436;
short var_14 = (short)-21896;
signed char var_15 = (signed char)-125;
unsigned long long int var_16 = 4611482086077740349ULL;
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
