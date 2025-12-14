#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1830498998;
signed char var_2 = (signed char)-74;
unsigned int var_3 = 4064136525U;
short var_4 = (short)-25405;
long long int var_8 = -2819741189220431306LL;
unsigned int var_9 = 372034632U;
int var_11 = 288717978;
int zero = 0;
int var_13 = 1566365310;
unsigned int var_14 = 1161265861U;
_Bool var_15 = (_Bool)0;
int var_16 = 1203885595;
void init() {
}

void checksum() {
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
