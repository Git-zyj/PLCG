#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 374803393352716655ULL;
signed char var_2 = (signed char)-38;
signed char var_3 = (signed char)68;
int var_5 = 635693547;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)64;
int var_10 = 1233153513;
long long int var_11 = 1432151489407238481LL;
int zero = 0;
signed char var_12 = (signed char)52;
long long int var_13 = -394904423104951904LL;
void init() {
}

void checksum() {
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
