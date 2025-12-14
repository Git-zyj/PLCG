#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -994181877;
int var_3 = 304782005;
signed char var_6 = (signed char)58;
int var_7 = -2091601963;
int var_8 = 1635046214;
unsigned int var_11 = 710212105U;
int zero = 0;
unsigned short var_12 = (unsigned short)39779;
int var_13 = 1733091540;
signed char var_14 = (signed char)74;
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
