#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)74;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 405024046U;
unsigned char var_11 = (unsigned char)171;
unsigned long long int var_12 = 3517505063087309500ULL;
int zero = 0;
long long int var_15 = -1587324527099300345LL;
long long int var_16 = -1702658432200892362LL;
long long int var_17 = -4355167560095841412LL;
long long int var_18 = -3720893827375046540LL;
void init() {
}

void checksum() {
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
