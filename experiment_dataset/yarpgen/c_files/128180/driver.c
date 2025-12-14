#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-8;
_Bool var_1 = (_Bool)1;
long long int var_6 = -7218051490092611547LL;
short var_9 = (short)-20951;
int zero = 0;
int var_11 = 2045300434;
int var_12 = 166367673;
int var_13 = -278617647;
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
