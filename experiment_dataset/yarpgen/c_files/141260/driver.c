#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4028273932878135228LL;
short var_5 = (short)19215;
signed char var_6 = (signed char)76;
signed char var_12 = (signed char)75;
int zero = 0;
long long int var_15 = 4154774633493039582LL;
unsigned char var_16 = (unsigned char)1;
void init() {
}

void checksum() {
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
