#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)100;
unsigned long long int var_5 = 6095748739645024278ULL;
unsigned long long int var_6 = 1843590269947393598ULL;
long long int var_8 = -1948207437707468867LL;
signed char var_9 = (signed char)-4;
unsigned long long int var_10 = 17417216338574443388ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)245;
unsigned int var_12 = 3346817191U;
long long int var_13 = -2419511813182190480LL;
unsigned long long int var_14 = 4603404376725773791ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
