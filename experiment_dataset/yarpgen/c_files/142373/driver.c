#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 228125733;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)134;
int zero = 0;
unsigned int var_17 = 4029151863U;
signed char var_18 = (signed char)121;
signed char var_19 = (signed char)-41;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
