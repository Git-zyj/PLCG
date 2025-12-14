#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)36785;
_Bool var_4 = (_Bool)0;
unsigned long long int var_9 = 7041721219797173478ULL;
unsigned int var_12 = 4112051168U;
int zero = 0;
unsigned int var_15 = 2180355257U;
unsigned int var_16 = 1984309904U;
unsigned char var_17 = (unsigned char)153;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
