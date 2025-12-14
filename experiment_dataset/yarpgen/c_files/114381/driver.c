#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)5;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-30572;
unsigned long long int var_7 = 16044246415385766339ULL;
int var_9 = -2092922072;
int var_10 = -579860236;
int zero = 0;
signed char var_11 = (signed char)98;
unsigned short var_12 = (unsigned short)36273;
unsigned int var_13 = 2500782129U;
unsigned long long int var_14 = 11393771300355293753ULL;
void init() {
}

void checksum() {
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
