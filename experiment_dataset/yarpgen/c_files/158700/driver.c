#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 575681135;
signed char var_1 = (signed char)0;
long long int var_2 = -1469126050049358655LL;
_Bool var_8 = (_Bool)1;
int var_10 = -2090921153;
unsigned char var_12 = (unsigned char)40;
int zero = 0;
unsigned short var_13 = (unsigned short)9550;
long long int var_14 = -4312920701426843800LL;
unsigned short var_15 = (unsigned short)27479;
unsigned long long int var_16 = 1435797007007797433ULL;
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
