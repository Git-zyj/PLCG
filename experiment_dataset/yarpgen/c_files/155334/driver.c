#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_9 = (_Bool)1;
long long int var_14 = -5088963818806950128LL;
short var_15 = (short)-21569;
signed char var_16 = (signed char)90;
unsigned int var_17 = 1708390320U;
int zero = 0;
unsigned char var_20 = (unsigned char)234;
unsigned short var_21 = (unsigned short)52238;
unsigned long long int var_22 = 3580071531764136338ULL;
unsigned short var_23 = (unsigned short)38422;
unsigned long long int var_24 = 14033440341404482034ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
