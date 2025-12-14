#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3362810618206972786LL;
signed char var_1 = (signed char)91;
unsigned int var_2 = 2350797856U;
int var_3 = 225706027;
long long int var_4 = -4663064530613297138LL;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-31622;
unsigned char var_7 = (unsigned char)195;
_Bool var_8 = (_Bool)0;
long long int var_9 = 8225371815009061542LL;
int zero = 0;
unsigned long long int var_10 = 8270076324463292529ULL;
unsigned short var_11 = (unsigned short)39105;
unsigned char var_12 = (unsigned char)53;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
