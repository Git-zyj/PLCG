#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)66;
signed char var_7 = (signed char)40;
unsigned short var_9 = (unsigned short)4507;
int zero = 0;
signed char var_14 = (signed char)-17;
unsigned char var_15 = (unsigned char)163;
unsigned char var_16 = (unsigned char)73;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
