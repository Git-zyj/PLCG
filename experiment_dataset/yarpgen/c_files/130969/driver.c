#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3919500528U;
short var_9 = (short)-28332;
int var_10 = -2021700742;
unsigned short var_11 = (unsigned short)57711;
int zero = 0;
unsigned short var_20 = (unsigned short)18195;
unsigned int var_21 = 4136829571U;
signed char var_22 = (signed char)75;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
