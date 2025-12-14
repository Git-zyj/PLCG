#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)22542;
long long int var_11 = 1052573476677855214LL;
signed char var_12 = (signed char)-56;
int zero = 0;
unsigned short var_14 = (unsigned short)18766;
long long int var_15 = 1693270032791167649LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
