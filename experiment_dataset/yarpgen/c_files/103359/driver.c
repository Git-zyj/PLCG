#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 587181330;
short var_2 = (short)22001;
signed char var_3 = (signed char)-95;
short var_4 = (short)-11705;
unsigned int var_5 = 3588833643U;
short var_7 = (short)-31829;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned int var_10 = 1782716556U;
short var_11 = (short)-12485;
signed char var_12 = (signed char)19;
signed char var_13 = (signed char)-43;
unsigned int var_14 = 3018863660U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
