#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 521262992U;
unsigned short var_6 = (unsigned short)27;
unsigned char var_7 = (unsigned char)112;
unsigned long long int var_9 = 8191387115909847437ULL;
long long int var_10 = -8284538604433881028LL;
int zero = 0;
unsigned short var_13 = (unsigned short)58587;
signed char var_14 = (signed char)17;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
