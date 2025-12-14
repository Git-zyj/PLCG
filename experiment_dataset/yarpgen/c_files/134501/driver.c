#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
int var_11 = -1090972932;
unsigned long long int var_13 = 6878139860806406422ULL;
int var_14 = -629998009;
short var_16 = (short)-31788;
int zero = 0;
unsigned char var_18 = (unsigned char)121;
long long int var_19 = 335490773470989290LL;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 15756267615896867800ULL;
unsigned short var_22 = (unsigned short)23442;
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
