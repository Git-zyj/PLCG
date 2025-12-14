#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -588041256;
signed char var_1 = (signed char)81;
unsigned short var_2 = (unsigned short)46238;
unsigned long long int var_7 = 10475187532312565358ULL;
unsigned int var_11 = 1330366554U;
int zero = 0;
int var_12 = -853293327;
signed char var_13 = (signed char)-118;
unsigned short var_14 = (unsigned short)17860;
long long int var_15 = 4817237882587889486LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
