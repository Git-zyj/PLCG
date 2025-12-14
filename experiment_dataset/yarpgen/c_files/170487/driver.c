#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = -4043005544965735882LL;
unsigned long long int var_2 = 13863504104246013400ULL;
int var_3 = -239374630;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)55;
unsigned short var_6 = (unsigned short)46367;
long long int var_7 = 117683828644604419LL;
unsigned short var_8 = (unsigned short)1069;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned char var_10 = (unsigned char)214;
unsigned short var_11 = (unsigned short)56316;
short var_12 = (short)15017;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
