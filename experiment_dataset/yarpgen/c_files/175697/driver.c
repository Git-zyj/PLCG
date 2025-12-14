#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)37361;
unsigned int var_7 = 3640606950U;
unsigned char var_9 = (unsigned char)85;
unsigned long long int var_13 = 1398199820052547353ULL;
int zero = 0;
long long int var_14 = -721849888767166946LL;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 4091795073U;
void init() {
}

void checksum() {
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
