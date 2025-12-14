#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11448701935625645904ULL;
signed char var_1 = (signed char)-29;
signed char var_2 = (signed char)-56;
signed char var_6 = (signed char)53;
signed char var_13 = (signed char)-103;
int zero = 0;
signed char var_14 = (signed char)22;
short var_15 = (short)-21859;
unsigned long long int var_16 = 3025790578437642512ULL;
short var_17 = (short)-31643;
signed char var_18 = (signed char)-82;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
