#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 11220116167873393069ULL;
long long int var_11 = -205727249066034490LL;
unsigned char var_13 = (unsigned char)244;
int zero = 0;
long long int var_17 = 9102585630692102721LL;
unsigned long long int var_18 = 11814945005367238484ULL;
unsigned char var_19 = (unsigned char)126;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
