#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)57;
long long int var_6 = 1639563883314893688LL;
signed char var_10 = (signed char)-23;
long long int var_18 = 6633857307981257015LL;
int zero = 0;
unsigned char var_19 = (unsigned char)77;
int var_20 = 297741823;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
