#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)33;
short var_7 = (short)23786;
short var_9 = (short)13970;
signed char var_11 = (signed char)-89;
int zero = 0;
long long int var_12 = -3264889005023811658LL;
unsigned char var_13 = (unsigned char)226;
unsigned long long int var_14 = 11943057131878165217ULL;
unsigned long long int var_15 = 7706795242635726184ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
