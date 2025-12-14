#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2158306055U;
long long int var_1 = -7764773268116408211LL;
long long int var_2 = 4309384544653940021LL;
signed char var_5 = (signed char)122;
int var_7 = 684392613;
signed char var_9 = (signed char)-87;
int zero = 0;
long long int var_10 = -1080592372525805464LL;
unsigned short var_11 = (unsigned short)57593;
long long int var_12 = 3643314177284914004LL;
unsigned long long int var_13 = 3532260271251539533ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
