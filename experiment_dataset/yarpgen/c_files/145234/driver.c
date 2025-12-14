#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)187;
_Bool var_1 = (_Bool)0;
short var_4 = (short)-22032;
short var_5 = (short)5820;
unsigned char var_6 = (unsigned char)195;
unsigned int var_11 = 4124522325U;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 12614532199787398669ULL;
short var_15 = (short)-21894;
int zero = 0;
signed char var_16 = (signed char)-40;
unsigned int var_17 = 448530719U;
long long int var_18 = 812372256520921989LL;
signed char var_19 = (signed char)-21;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
