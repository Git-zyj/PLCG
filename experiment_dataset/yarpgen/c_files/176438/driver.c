#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -5241154119607795793LL;
signed char var_6 = (signed char)76;
unsigned char var_7 = (unsigned char)243;
int zero = 0;
unsigned char var_10 = (unsigned char)243;
unsigned long long int var_11 = 6037690846221237778ULL;
unsigned short var_12 = (unsigned short)60620;
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
