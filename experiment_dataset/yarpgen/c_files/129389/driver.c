#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 4056263562U;
_Bool var_13 = (_Bool)1;
signed char var_15 = (signed char)-78;
int zero = 0;
unsigned int var_16 = 669691647U;
long long int var_17 = -1071409214026614792LL;
unsigned short var_18 = (unsigned short)36194;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
