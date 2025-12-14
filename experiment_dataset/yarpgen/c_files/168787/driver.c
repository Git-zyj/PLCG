#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)60;
unsigned int var_6 = 494156256U;
int var_7 = -273376376;
unsigned char var_9 = (unsigned char)101;
unsigned char var_10 = (unsigned char)215;
unsigned char var_11 = (unsigned char)168;
_Bool var_15 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)115;
int var_19 = 1200273484;
void init() {
}

void checksum() {
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
