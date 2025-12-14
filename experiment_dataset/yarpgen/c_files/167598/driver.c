#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2296948073010040229ULL;
unsigned long long int var_3 = 12577930949005153887ULL;
unsigned long long int var_4 = 13783536565983135721ULL;
unsigned short var_9 = (unsigned short)40619;
int zero = 0;
unsigned short var_13 = (unsigned short)7394;
unsigned int var_14 = 3102851494U;
void init() {
}

void checksum() {
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
