#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 8218038657896436848ULL;
signed char var_13 = (signed char)104;
long long int var_16 = -2146738692736957202LL;
int zero = 0;
unsigned char var_19 = (unsigned char)58;
signed char var_20 = (signed char)-32;
short var_21 = (short)28137;
signed char var_22 = (signed char)44;
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
