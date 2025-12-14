#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-116;
short var_12 = (short)-26345;
unsigned short var_17 = (unsigned short)51483;
int zero = 0;
unsigned char var_19 = (unsigned char)211;
signed char var_20 = (signed char)-126;
long long int var_21 = 3278067335156477672LL;
unsigned long long int var_22 = 11135189444608875195ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
