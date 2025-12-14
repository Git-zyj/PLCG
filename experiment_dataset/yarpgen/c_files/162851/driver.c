#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2974520751U;
unsigned long long int var_3 = 14385218913820076529ULL;
_Bool var_4 = (_Bool)1;
long long int var_5 = -8045651399068922140LL;
int var_8 = -712555588;
signed char var_9 = (signed char)72;
unsigned long long int var_10 = 18176960920774406073ULL;
int zero = 0;
short var_11 = (short)1601;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)11268;
unsigned short var_14 = (unsigned short)54799;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
