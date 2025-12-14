#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)6586;
signed char var_9 = (signed char)-51;
long long int var_11 = 3851905487204250802LL;
int zero = 0;
long long int var_20 = 4595762526807590814LL;
signed char var_21 = (signed char)12;
short var_22 = (short)-8978;
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
