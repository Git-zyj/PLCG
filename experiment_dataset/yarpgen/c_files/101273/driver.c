#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -2061607293;
unsigned char var_5 = (unsigned char)63;
unsigned char var_6 = (unsigned char)146;
long long int var_7 = -3603492975314296106LL;
int var_9 = 91824588;
unsigned short var_10 = (unsigned short)26748;
_Bool var_13 = (_Bool)0;
long long int var_15 = -5437950368566246902LL;
long long int var_16 = 3291544494518612045LL;
int zero = 0;
long long int var_18 = -377739044859585222LL;
unsigned short var_19 = (unsigned short)63438;
unsigned short var_20 = (unsigned short)62525;
_Bool var_21 = (_Bool)0;
int var_22 = 324706841;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
