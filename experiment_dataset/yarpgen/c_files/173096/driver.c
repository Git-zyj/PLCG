#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)18;
unsigned int var_4 = 997546395U;
signed char var_5 = (signed char)4;
unsigned char var_7 = (unsigned char)167;
unsigned long long int var_8 = 12054966695228430750ULL;
unsigned char var_9 = (unsigned char)105;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 340395826651400308ULL;
unsigned char var_12 = (unsigned char)194;
int var_14 = -548479648;
unsigned char var_16 = (unsigned char)230;
int zero = 0;
unsigned long long int var_17 = 10032167125343183827ULL;
_Bool var_18 = (_Bool)0;
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
