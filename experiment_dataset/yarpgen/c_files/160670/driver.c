#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3600715762U;
short var_1 = (short)6483;
long long int var_6 = 1399904837438118630LL;
signed char var_8 = (signed char)-89;
signed char var_9 = (signed char)-20;
long long int var_11 = -842697581546064221LL;
unsigned long long int var_12 = 4461731626638461992ULL;
short var_15 = (short)-29743;
int zero = 0;
unsigned char var_16 = (unsigned char)109;
unsigned int var_17 = 1414015883U;
long long int var_18 = -1488849854355722815LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
