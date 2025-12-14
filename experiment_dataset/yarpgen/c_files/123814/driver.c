#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)82;
unsigned short var_8 = (unsigned short)28464;
unsigned short var_10 = (unsigned short)9075;
int zero = 0;
signed char var_14 = (signed char)71;
_Bool var_15 = (_Bool)0;
int var_16 = -437202080;
signed char var_17 = (signed char)-124;
void init() {
}

void checksum() {
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
