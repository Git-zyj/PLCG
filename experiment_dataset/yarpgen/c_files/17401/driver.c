#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)30838;
_Bool var_7 = (_Bool)0;
int var_9 = -1582481206;
signed char var_10 = (signed char)62;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 694976848U;
unsigned long long int var_19 = 15880816326786707239ULL;
long long int var_20 = -3603443622341651095LL;
signed char var_21 = (signed char)-11;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
