#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)63788;
unsigned long long int var_10 = 9713266104376529483ULL;
signed char var_11 = (signed char)32;
unsigned long long int var_12 = 4219674027341828117ULL;
unsigned char var_16 = (unsigned char)166;
int zero = 0;
unsigned short var_17 = (unsigned short)43208;
signed char var_18 = (signed char)-76;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
