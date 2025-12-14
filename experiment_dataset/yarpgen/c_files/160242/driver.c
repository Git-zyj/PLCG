#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)87;
unsigned char var_1 = (unsigned char)181;
signed char var_3 = (signed char)101;
signed char var_6 = (signed char)-100;
unsigned char var_8 = (unsigned char)22;
signed char var_9 = (signed char)102;
unsigned char var_11 = (unsigned char)100;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)57;
signed char var_15 = (signed char)-57;
unsigned char var_16 = (unsigned char)16;
void init() {
}

void checksum() {
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
