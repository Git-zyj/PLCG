#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -157700645;
_Bool var_4 = (_Bool)0;
unsigned short var_7 = (unsigned short)47498;
long long int var_8 = 2633333414467126435LL;
unsigned int var_10 = 3013496139U;
signed char var_12 = (signed char)23;
signed char var_13 = (signed char)22;
unsigned char var_15 = (unsigned char)89;
int zero = 0;
unsigned long long int var_17 = 14853704001915373548ULL;
unsigned short var_18 = (unsigned short)55869;
unsigned long long int var_19 = 13569344186479435245ULL;
unsigned long long int var_20 = 11070865880669694736ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
