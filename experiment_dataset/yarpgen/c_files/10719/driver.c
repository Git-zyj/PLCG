#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 16610124858324621341ULL;
_Bool var_13 = (_Bool)1;
unsigned char var_16 = (unsigned char)144;
int zero = 0;
signed char var_19 = (signed char)-93;
unsigned short var_20 = (unsigned short)21349;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
