#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)98;
long long int var_4 = 4137829480423844851LL;
_Bool var_5 = (_Bool)0;
unsigned short var_10 = (unsigned short)39646;
unsigned int var_11 = 2920260603U;
unsigned long long int var_12 = 13418490230260312338ULL;
unsigned char var_13 = (unsigned char)125;
int var_14 = -1409397476;
unsigned long long int var_17 = 9147098920674468090ULL;
int zero = 0;
long long int var_19 = 6484717120778378262LL;
signed char var_20 = (signed char)11;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
