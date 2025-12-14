#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-20;
unsigned short var_2 = (unsigned short)27293;
unsigned char var_4 = (unsigned char)89;
long long int var_7 = -7059495945274354415LL;
signed char var_11 = (signed char)-63;
int zero = 0;
unsigned int var_12 = 1488185466U;
signed char var_13 = (signed char)70;
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
