#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 855323658698013691ULL;
_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 17524307128217403584ULL;
long long int var_6 = 1201938309837111114LL;
unsigned short var_9 = (unsigned short)7360;
signed char var_10 = (signed char)-96;
int zero = 0;
unsigned short var_12 = (unsigned short)39142;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-58;
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
