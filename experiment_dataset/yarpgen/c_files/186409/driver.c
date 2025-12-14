#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_11 = (signed char)-77;
unsigned short var_12 = (unsigned short)29968;
short var_14 = (short)12059;
int zero = 0;
unsigned int var_16 = 1201702709U;
signed char var_17 = (signed char)63;
unsigned int var_18 = 1764243049U;
unsigned short var_19 = (unsigned short)19487;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
