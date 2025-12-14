#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8734621943734082395LL;
unsigned int var_5 = 4273708923U;
long long int var_7 = -408250068038897341LL;
_Bool var_8 = (_Bool)0;
long long int var_9 = -6691030933222115385LL;
unsigned char var_10 = (unsigned char)226;
unsigned char var_11 = (unsigned char)180;
unsigned char var_12 = (unsigned char)30;
int zero = 0;
unsigned short var_13 = (unsigned short)59624;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
