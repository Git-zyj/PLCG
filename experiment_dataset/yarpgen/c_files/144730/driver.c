#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31776;
int var_2 = 1043858914;
signed char var_6 = (signed char)18;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)12019;
signed char var_18 = (signed char)-51;
void init() {
}

void checksum() {
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
