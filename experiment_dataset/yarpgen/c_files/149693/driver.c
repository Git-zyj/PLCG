#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21122;
long long int var_3 = -7269438027532338913LL;
int var_6 = 228186468;
int var_10 = 1785761987;
int var_11 = 116377510;
int var_12 = -1549557824;
_Bool var_17 = (_Bool)0;
int zero = 0;
short var_20 = (short)-889;
unsigned int var_21 = 4131582692U;
unsigned int var_22 = 3069380098U;
long long int var_23 = 6280064620834918284LL;
unsigned short var_24 = (unsigned short)57594;
short var_25 = (short)-10635;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
