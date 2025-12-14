#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16240;
unsigned int var_9 = 975689430U;
unsigned int var_11 = 2172949386U;
short var_13 = (short)-12645;
unsigned short var_17 = (unsigned short)5575;
int zero = 0;
unsigned int var_18 = 2649613253U;
unsigned char var_19 = (unsigned char)74;
unsigned long long int var_20 = 8766134981326685828ULL;
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
