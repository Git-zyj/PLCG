#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24306;
unsigned int var_2 = 1459009875U;
unsigned int var_6 = 2750383293U;
int var_9 = 1827567376;
unsigned short var_10 = (unsigned short)55319;
signed char var_13 = (signed char)-90;
short var_15 = (short)-6341;
int zero = 0;
unsigned long long int var_16 = 10451062420743250689ULL;
int var_17 = 313154146;
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
