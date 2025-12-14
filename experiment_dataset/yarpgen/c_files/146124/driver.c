#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3272647024515955552LL;
unsigned int var_6 = 2976081376U;
unsigned char var_10 = (unsigned char)134;
signed char var_12 = (signed char)-26;
short var_14 = (short)28441;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = -378441417;
unsigned long long int var_22 = 6401458994833831665ULL;
unsigned int var_23 = 4028467701U;
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
