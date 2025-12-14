#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10457;
int var_3 = -4158866;
signed char var_7 = (signed char)18;
long long int var_9 = -6950307708581168127LL;
short var_10 = (short)14266;
int zero = 0;
int var_11 = -1161792272;
unsigned int var_12 = 3232985491U;
signed char var_13 = (signed char)0;
void init() {
}

void checksum() {
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
