#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)905;
long long int var_1 = -4907700758189825627LL;
int var_2 = -1288987303;
int zero = 0;
short var_10 = (short)-5170;
unsigned int var_11 = 287857445U;
short var_12 = (short)-7484;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
