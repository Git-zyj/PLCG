#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3246165291U;
long long int var_9 = 589952385203657848LL;
unsigned short var_10 = (unsigned short)18455;
int zero = 0;
unsigned long long int var_17 = 11777667013980534765ULL;
signed char var_18 = (signed char)1;
unsigned short var_19 = (unsigned short)22769;
signed char var_20 = (signed char)52;
signed char var_21 = (signed char)29;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
