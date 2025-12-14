#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8012274508468410360LL;
unsigned char var_4 = (unsigned char)252;
signed char var_6 = (signed char)-79;
signed char var_7 = (signed char)-80;
unsigned long long int var_8 = 10427072252967404015ULL;
long long int var_10 = -5301359326464804759LL;
int zero = 0;
int var_11 = 536524529;
signed char var_12 = (signed char)-59;
void init() {
}

void checksum() {
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
