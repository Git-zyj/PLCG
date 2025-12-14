#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 690062709535590254LL;
int var_1 = 602815894;
long long int var_3 = 4175729494982770897LL;
_Bool var_4 = (_Bool)0;
int var_5 = -1762645872;
short var_6 = (short)-31419;
unsigned short var_7 = (unsigned short)34125;
unsigned char var_9 = (unsigned char)215;
unsigned char var_10 = (unsigned char)232;
signed char var_11 = (signed char)-50;
unsigned long long int var_13 = 3537354100175434892ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)117;
unsigned long long int var_16 = 23279619969723037ULL;
unsigned int var_17 = 1913708792U;
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
