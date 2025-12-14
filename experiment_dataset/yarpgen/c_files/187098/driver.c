#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-59;
short var_2 = (short)24917;
unsigned char var_4 = (unsigned char)172;
long long int var_5 = 1902201252639294059LL;
int var_10 = 1064763268;
short var_13 = (short)23201;
int zero = 0;
short var_18 = (short)25074;
long long int var_19 = -7133719982806112330LL;
void init() {
}

void checksum() {
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
