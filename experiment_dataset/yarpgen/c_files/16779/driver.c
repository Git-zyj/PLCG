#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6439077634068098307LL;
int var_3 = 1069598404;
unsigned int var_4 = 2529908601U;
unsigned char var_9 = (unsigned char)124;
long long int var_10 = -4557900296999358949LL;
unsigned int var_11 = 1293865134U;
int zero = 0;
signed char var_12 = (signed char)-6;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-92;
short var_15 = (short)9991;
unsigned short var_16 = (unsigned short)689;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
