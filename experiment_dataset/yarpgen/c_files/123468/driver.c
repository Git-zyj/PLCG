#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1382980539;
unsigned long long int var_6 = 13841776761147676244ULL;
unsigned short var_16 = (unsigned short)57569;
short var_18 = (short)-10234;
int zero = 0;
signed char var_20 = (signed char)-100;
unsigned short var_21 = (unsigned short)47079;
unsigned long long int var_22 = 10744633591180583407ULL;
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
