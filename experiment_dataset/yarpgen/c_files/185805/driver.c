#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 3819927201934544470LL;
unsigned long long int var_11 = 13346068851023821967ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)228;
long long int var_13 = -1282262894152318897LL;
signed char var_14 = (signed char)-38;
void init() {
}

void checksum() {
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
