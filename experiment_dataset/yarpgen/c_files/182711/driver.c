#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1995371850502267545LL;
long long int var_3 = 3238927665038077775LL;
_Bool var_7 = (_Bool)1;
unsigned short var_11 = (unsigned short)22617;
int zero = 0;
short var_14 = (short)-22481;
signed char var_15 = (signed char)122;
long long int var_16 = 3204398530677917359LL;
signed char var_17 = (signed char)-118;
signed char var_18 = (signed char)18;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
