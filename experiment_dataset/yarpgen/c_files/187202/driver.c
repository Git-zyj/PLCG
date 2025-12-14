#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)255;
_Bool var_3 = (_Bool)0;
int var_4 = -1014676356;
short var_5 = (short)23878;
unsigned char var_8 = (unsigned char)251;
unsigned char var_9 = (unsigned char)58;
unsigned int var_10 = 1070668187U;
short var_12 = (short)24756;
int zero = 0;
long long int var_13 = -4913299741604622481LL;
_Bool var_14 = (_Bool)1;
long long int var_15 = 5191348641035756834LL;
signed char var_16 = (signed char)-82;
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
