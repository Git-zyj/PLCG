#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4172921947U;
signed char var_3 = (signed char)-25;
_Bool var_5 = (_Bool)1;
int var_7 = 854983513;
long long int var_8 = 4754889269034024521LL;
int zero = 0;
unsigned int var_14 = 362325431U;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)22;
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
