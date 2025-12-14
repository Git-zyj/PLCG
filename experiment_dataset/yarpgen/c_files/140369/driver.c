#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29850;
signed char var_2 = (signed char)-41;
unsigned long long int var_16 = 9912149656897419374ULL;
int var_17 = 640888461;
int zero = 0;
long long int var_20 = -7909279999197676135LL;
long long int var_21 = 2104897989577113615LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
