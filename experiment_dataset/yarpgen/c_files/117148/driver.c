#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)108;
int var_9 = 561326262;
unsigned short var_10 = (unsigned short)13925;
unsigned long long int var_13 = 9663099422586368587ULL;
long long int var_16 = -6153499870935145432LL;
int zero = 0;
unsigned int var_19 = 2408558102U;
int var_20 = 1895269566;
signed char var_21 = (signed char)-77;
int var_22 = 1065703094;
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
