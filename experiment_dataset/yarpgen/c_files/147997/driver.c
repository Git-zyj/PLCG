#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44658;
unsigned long long int var_3 = 9463427449544351383ULL;
_Bool var_4 = (_Bool)1;
int var_5 = 640527425;
unsigned char var_6 = (unsigned char)234;
signed char var_7 = (signed char)45;
long long int var_8 = 2955970146511567340LL;
int zero = 0;
int var_10 = 1011763475;
_Bool var_11 = (_Bool)0;
int var_12 = 78445883;
long long int var_13 = 981267825948628012LL;
int var_14 = 1883367815;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
