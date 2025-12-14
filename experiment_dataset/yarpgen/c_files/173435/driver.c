#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 552670513U;
int var_3 = 1812952418;
_Bool var_5 = (_Bool)0;
unsigned int var_9 = 4016017769U;
unsigned char var_14 = (unsigned char)109;
_Bool var_17 = (_Bool)0;
unsigned char var_19 = (unsigned char)151;
int zero = 0;
signed char var_20 = (signed char)-35;
unsigned long long int var_21 = 17981179363724475675ULL;
unsigned char var_22 = (unsigned char)134;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
