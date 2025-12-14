#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10863384652139295986ULL;
unsigned short var_3 = (unsigned short)28199;
int var_4 = 2052870124;
unsigned long long int var_5 = 9393017081410302520ULL;
unsigned char var_6 = (unsigned char)220;
_Bool var_7 = (_Bool)0;
long long int var_8 = 2340137506586119122LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)75;
long long int var_12 = 4142953363866808553LL;
unsigned char var_13 = (unsigned char)156;
long long int var_14 = -8768477172546393010LL;
unsigned int var_15 = 3092290116U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
