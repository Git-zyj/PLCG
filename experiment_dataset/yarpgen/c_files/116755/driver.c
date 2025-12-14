#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-4;
unsigned char var_2 = (unsigned char)63;
_Bool var_4 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 9317099267409520486ULL;
signed char var_13 = (signed char)75;
signed char var_14 = (signed char)-90;
signed char var_15 = (signed char)-73;
unsigned int var_16 = 549128729U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
