#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -997183707100703592LL;
long long int var_2 = -3390055898588544652LL;
unsigned char var_6 = (unsigned char)71;
unsigned int var_8 = 244721799U;
unsigned int var_10 = 3729506996U;
unsigned char var_12 = (unsigned char)5;
int zero = 0;
unsigned char var_13 = (unsigned char)252;
signed char var_14 = (signed char)-111;
long long int var_15 = 1553111367646767987LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
