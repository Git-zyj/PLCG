#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18121357986677766756ULL;
long long int var_3 = 6912921267684084217LL;
int var_5 = -633086887;
int var_8 = 1833023341;
short var_10 = (short)-8948;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)-10;
int zero = 0;
unsigned long long int var_14 = 9352619780338332932ULL;
unsigned long long int var_15 = 4455083888356199968ULL;
long long int var_16 = -2100559029089811461LL;
_Bool var_17 = (_Bool)0;
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
