#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)74;
signed char var_3 = (signed char)-51;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)51;
signed char var_8 = (signed char)-102;
unsigned char var_9 = (unsigned char)100;
signed char var_11 = (signed char)4;
int zero = 0;
signed char var_12 = (signed char)-103;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)174;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
