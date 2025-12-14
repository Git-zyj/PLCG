#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_3 = 2924204840111464253LL;
unsigned char var_4 = (unsigned char)87;
short var_6 = (short)19638;
short var_7 = (short)-17840;
unsigned short var_8 = (unsigned short)60719;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)27747;
int zero = 0;
long long int var_14 = 6222299917152260048LL;
long long int var_15 = 3943078063898291663LL;
long long int var_16 = -7513148637165165169LL;
short var_17 = (short)-11729;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
