#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2587229528920281281LL;
long long int var_2 = 603201711943603769LL;
unsigned short var_6 = (unsigned short)24991;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)235;
short var_11 = (short)-7820;
int zero = 0;
unsigned char var_13 = (unsigned char)62;
short var_14 = (short)-17565;
unsigned long long int var_15 = 3495255697729305677ULL;
unsigned long long int var_16 = 18112108582072660308ULL;
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
