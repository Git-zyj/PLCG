#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25911;
long long int var_1 = 36532923352549476LL;
long long int var_2 = -6611567911456344579LL;
unsigned char var_3 = (unsigned char)165;
signed char var_6 = (signed char)57;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)2;
int var_11 = -1427349761;
int zero = 0;
short var_12 = (short)31058;
int var_13 = -230773731;
unsigned long long int var_14 = 13066422048889272324ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
