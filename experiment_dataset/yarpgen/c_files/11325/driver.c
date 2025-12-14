#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 861868947;
unsigned int var_4 = 3855704498U;
unsigned char var_5 = (unsigned char)47;
int var_7 = 1884482871;
_Bool var_8 = (_Bool)0;
int var_9 = 912361831;
unsigned char var_10 = (unsigned char)164;
int zero = 0;
unsigned int var_13 = 2305789034U;
unsigned long long int var_14 = 12083007064681399857ULL;
short var_15 = (short)16585;
signed char var_16 = (signed char)78;
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
