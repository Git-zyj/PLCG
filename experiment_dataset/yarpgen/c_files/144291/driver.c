#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 6129805084041602619ULL;
unsigned long long int var_5 = 11835658247811328913ULL;
unsigned short var_9 = (unsigned short)24866;
int zero = 0;
unsigned long long int var_10 = 6750885753945039062ULL;
unsigned short var_11 = (unsigned short)49615;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
