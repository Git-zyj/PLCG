#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14553763147278485795ULL;
unsigned char var_1 = (unsigned char)52;
unsigned int var_3 = 246534030U;
signed char var_4 = (signed char)-8;
unsigned char var_5 = (unsigned char)172;
_Bool var_6 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int zero = 0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-93;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
