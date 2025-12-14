#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 694436970;
signed char var_5 = (signed char)-33;
unsigned long long int var_6 = 7293745121091184589ULL;
long long int var_8 = 7820990508713141870LL;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)23572;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
