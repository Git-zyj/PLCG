#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2171305220U;
long long int var_3 = -1225674120373132029LL;
unsigned char var_4 = (unsigned char)108;
unsigned short var_6 = (unsigned short)468;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 11106586621588678250ULL;
int var_12 = -2012060402;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
