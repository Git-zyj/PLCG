#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1443373940;
unsigned short var_3 = (unsigned short)24476;
long long int var_8 = -3721784245111711003LL;
unsigned long long int var_17 = 18362611975363165674ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)25265;
signed char var_20 = (signed char)52;
unsigned char var_21 = (unsigned char)95;
unsigned int var_22 = 1085858884U;
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
