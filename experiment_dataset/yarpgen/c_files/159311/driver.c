#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10948;
unsigned long long int var_3 = 12398693786011883849ULL;
unsigned long long int var_19 = 17433985113391757078ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)61765;
signed char var_21 = (signed char)-23;
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
