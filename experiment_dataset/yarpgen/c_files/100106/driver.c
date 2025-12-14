#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)220;
signed char var_6 = (signed char)110;
unsigned long long int var_10 = 6248101531258590588ULL;
int zero = 0;
long long int var_12 = -9010716436465927631LL;
unsigned int var_13 = 3512390401U;
void init() {
}

void checksum() {
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
