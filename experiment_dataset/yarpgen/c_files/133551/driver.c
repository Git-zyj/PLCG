#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)236;
_Bool var_5 = (_Bool)0;
short var_7 = (short)27528;
signed char var_9 = (signed char)-58;
long long int var_10 = 3561614074227827777LL;
signed char var_11 = (signed char)82;
unsigned char var_13 = (unsigned char)54;
unsigned int var_14 = 1896956565U;
int zero = 0;
unsigned long long int var_20 = 6879394426431098721ULL;
short var_21 = (short)-3180;
unsigned char var_22 = (unsigned char)126;
signed char var_23 = (signed char)-110;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
