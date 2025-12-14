#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6623129170460394660LL;
signed char var_5 = (signed char)-119;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)0;
long long int var_12 = -7597051991093130631LL;
short var_15 = (short)-16192;
int zero = 0;
unsigned long long int var_20 = 6533035370353254737ULL;
unsigned char var_21 = (unsigned char)41;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
