#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned int var_10 = 1144074322U;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 1809855645U;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3198106791U;
unsigned char var_16 = (unsigned char)81;
unsigned long long int var_17 = 10509825215175123626ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
