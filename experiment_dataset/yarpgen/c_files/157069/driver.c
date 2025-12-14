#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-77;
short var_7 = (short)-7241;
int var_10 = -365562125;
unsigned char var_11 = (unsigned char)193;
int zero = 0;
unsigned long long int var_15 = 5157902653287434463ULL;
short var_16 = (short)-29504;
signed char var_17 = (signed char)32;
int var_18 = 382398035;
void init() {
}

void checksum() {
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
