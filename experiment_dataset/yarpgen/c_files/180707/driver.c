#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28219;
_Bool var_2 = (_Bool)0;
int var_3 = -128397334;
unsigned char var_6 = (unsigned char)168;
unsigned short var_7 = (unsigned short)6431;
signed char var_9 = (signed char)-6;
signed char var_10 = (signed char)52;
int zero = 0;
unsigned long long int var_18 = 11413629997971111720ULL;
signed char var_19 = (signed char)59;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
