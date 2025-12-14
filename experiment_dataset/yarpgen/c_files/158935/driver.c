#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14440652196191481397ULL;
unsigned long long int var_1 = 15984910768156655390ULL;
signed char var_2 = (signed char)-12;
unsigned char var_4 = (unsigned char)213;
short var_7 = (short)-5309;
_Bool var_8 = (_Bool)1;
int zero = 0;
long long int var_11 = -3403786460439887851LL;
unsigned int var_12 = 1965154388U;
long long int var_13 = -734197496820876345LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
