#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)16971;
unsigned char var_8 = (unsigned char)251;
unsigned short var_10 = (unsigned short)2733;
_Bool var_12 = (_Bool)0;
unsigned short var_14 = (unsigned short)55368;
int zero = 0;
signed char var_18 = (signed char)-89;
long long int var_19 = -5942196845269176328LL;
void init() {
}

void checksum() {
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
