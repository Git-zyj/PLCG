#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 59665545U;
long long int var_3 = 4964554117850128674LL;
unsigned char var_6 = (unsigned char)76;
unsigned int var_9 = 1566199859U;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned char var_16 = (unsigned char)193;
signed char var_17 = (signed char)-11;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
