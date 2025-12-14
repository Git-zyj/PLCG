#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30599;
unsigned int var_1 = 1048181513U;
unsigned int var_2 = 642494060U;
unsigned long long int var_4 = 8504209324866299256ULL;
unsigned long long int var_6 = 3714590820380897205ULL;
unsigned short var_7 = (unsigned short)16610;
long long int var_10 = -2632645395150936780LL;
unsigned long long int var_11 = 6490195295011741126ULL;
long long int var_12 = 2274027522199119191LL;
unsigned char var_15 = (unsigned char)115;
unsigned int var_17 = 3537381506U;
int zero = 0;
short var_19 = (short)-16513;
unsigned int var_20 = 751966355U;
int var_21 = 1301185966;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
