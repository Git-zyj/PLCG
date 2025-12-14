#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)2583;
unsigned long long int var_3 = 16896697833067555452ULL;
unsigned short var_4 = (unsigned short)37559;
unsigned int var_5 = 574212143U;
int var_6 = 249415782;
int zero = 0;
unsigned char var_11 = (unsigned char)107;
_Bool var_12 = (_Bool)1;
long long int var_13 = 16170880855750506LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
