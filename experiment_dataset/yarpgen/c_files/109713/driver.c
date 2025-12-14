#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)6368;
unsigned short var_13 = (unsigned short)23211;
int zero = 0;
long long int var_19 = 501723276672473075LL;
unsigned int var_20 = 1521698777U;
unsigned long long int var_21 = 3694268735643777185ULL;
long long int var_22 = 5585608814550000223LL;
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
