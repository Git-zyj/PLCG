#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 548377023;
short var_8 = (short)20950;
long long int var_9 = 9113776615806133747LL;
int zero = 0;
unsigned char var_11 = (unsigned char)230;
signed char var_12 = (signed char)-6;
unsigned long long int var_13 = 6557295591153161563ULL;
signed char var_14 = (signed char)-76;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
