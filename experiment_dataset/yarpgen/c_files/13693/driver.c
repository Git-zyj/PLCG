#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_3 = (unsigned short)36943;
signed char var_9 = (signed char)5;
int var_15 = -754812352;
unsigned short var_16 = (unsigned short)14455;
unsigned short var_18 = (unsigned short)53085;
int zero = 0;
unsigned short var_20 = (unsigned short)25039;
int var_21 = -920907435;
signed char var_22 = (signed char)97;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)1;
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
