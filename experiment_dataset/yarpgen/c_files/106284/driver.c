#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2123282920294987947ULL;
unsigned int var_2 = 1346763697U;
unsigned int var_5 = 1817789809U;
unsigned int var_6 = 3561648122U;
long long int var_9 = 7280256282660571703LL;
unsigned short var_10 = (unsigned short)35485;
int var_11 = -1581997623;
short var_12 = (short)-977;
long long int var_14 = 2494245152855086611LL;
int zero = 0;
int var_16 = -1704082462;
long long int var_17 = 3517202689238178680LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
