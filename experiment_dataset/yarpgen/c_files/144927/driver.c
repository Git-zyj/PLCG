#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)2;
unsigned short var_1 = (unsigned short)11230;
int var_5 = 1516039195;
int var_7 = 918188160;
unsigned char var_11 = (unsigned char)161;
int var_13 = -1902971002;
int zero = 0;
signed char var_14 = (signed char)89;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
