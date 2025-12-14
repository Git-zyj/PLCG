#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49152;
unsigned char var_1 = (unsigned char)227;
long long int var_2 = -5479625799766673644LL;
unsigned char var_3 = (unsigned char)114;
unsigned char var_5 = (unsigned char)102;
unsigned int var_6 = 3173224019U;
int var_7 = 1677687291;
signed char var_9 = (signed char)-70;
short var_10 = (short)-6250;
int zero = 0;
signed char var_11 = (signed char)-30;
long long int var_12 = -4059711089749870506LL;
short var_13 = (short)-27828;
unsigned long long int var_14 = 7454994716941405610ULL;
_Bool var_15 = (_Bool)1;
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
