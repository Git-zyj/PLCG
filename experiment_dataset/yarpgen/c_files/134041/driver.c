#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_3 = 8943537925085993061LL;
unsigned short var_4 = (unsigned short)53917;
unsigned int var_8 = 380406378U;
unsigned char var_10 = (unsigned char)24;
int var_11 = -1939350825;
_Bool var_12 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = -233399018;
unsigned short var_17 = (unsigned short)37289;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
