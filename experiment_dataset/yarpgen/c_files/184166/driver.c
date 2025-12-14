#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17767094691960838217ULL;
unsigned short var_9 = (unsigned short)57470;
short var_10 = (short)-8954;
long long int var_11 = 7779517368672108023LL;
int zero = 0;
signed char var_14 = (signed char)68;
unsigned long long int var_15 = 5724429630650198972ULL;
signed char var_16 = (signed char)-99;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
