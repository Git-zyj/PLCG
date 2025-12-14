#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)25768;
unsigned short var_4 = (unsigned short)61996;
signed char var_7 = (signed char)-75;
long long int var_8 = -7519316211662871291LL;
int zero = 0;
signed char var_12 = (signed char)89;
unsigned int var_13 = 2486099229U;
unsigned char var_14 = (unsigned char)12;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 1832321185U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
