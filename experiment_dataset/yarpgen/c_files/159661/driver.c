#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)224;
signed char var_2 = (signed char)-96;
_Bool var_5 = (_Bool)0;
short var_9 = (short)14503;
int zero = 0;
signed char var_10 = (signed char)23;
unsigned char var_11 = (unsigned char)245;
signed char var_12 = (signed char)-51;
unsigned char var_13 = (unsigned char)115;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
