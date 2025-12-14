#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 989480860U;
long long int var_10 = -5289777325016572356LL;
unsigned char var_17 = (unsigned char)34;
int zero = 0;
unsigned char var_20 = (unsigned char)170;
short var_21 = (short)17601;
unsigned long long int var_22 = 601963931471038260ULL;
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
