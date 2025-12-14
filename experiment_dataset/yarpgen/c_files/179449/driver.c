#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1782577848556949764LL;
short var_2 = (short)-11183;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)50557;
short var_6 = (short)10710;
long long int var_9 = 1389918023580489585LL;
unsigned char var_11 = (unsigned char)244;
long long int var_12 = -3558940040972396666LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)6302;
long long int var_16 = -3828887358167282992LL;
unsigned long long int var_17 = 17312055262900122615ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
