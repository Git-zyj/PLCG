#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-32675;
long long int var_2 = 6987366639442295600LL;
unsigned short var_4 = (unsigned short)56294;
signed char var_6 = (signed char)52;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 10016976450124861578ULL;
unsigned short var_12 = (unsigned short)9447;
int zero = 0;
long long int var_16 = 2178233869101165073LL;
long long int var_17 = -4348038555610429782LL;
short var_18 = (short)-10811;
void init() {
}

void checksum() {
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
