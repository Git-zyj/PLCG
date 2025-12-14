#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)166;
signed char var_3 = (signed char)-113;
signed char var_8 = (signed char)-29;
unsigned short var_13 = (unsigned short)61458;
long long int var_15 = -838287861585920767LL;
int zero = 0;
signed char var_19 = (signed char)99;
unsigned char var_20 = (unsigned char)74;
long long int var_21 = 8471224085810756026LL;
signed char var_22 = (signed char)-74;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
