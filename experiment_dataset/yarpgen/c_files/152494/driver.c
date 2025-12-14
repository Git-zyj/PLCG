#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8638671874119417339ULL;
signed char var_3 = (signed char)-109;
unsigned char var_8 = (unsigned char)9;
signed char var_9 = (signed char)-113;
int zero = 0;
int var_17 = 16939527;
unsigned long long int var_18 = 7943991273659228840ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
