#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)100;
long long int var_9 = 8824587847260527560LL;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 4141941551U;
int zero = 0;
signed char var_14 = (signed char)-124;
short var_15 = (short)24676;
unsigned int var_16 = 1988850963U;
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
