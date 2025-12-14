#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11775483089544422666ULL;
unsigned short var_3 = (unsigned short)49239;
_Bool var_4 = (_Bool)1;
short var_6 = (short)2487;
unsigned long long int var_13 = 7185637320731151476ULL;
int var_14 = -1547897865;
unsigned char var_17 = (unsigned char)41;
int zero = 0;
unsigned long long int var_19 = 15137577587901597340ULL;
unsigned char var_20 = (unsigned char)123;
void init() {
}

void checksum() {
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
