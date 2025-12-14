#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-58;
signed char var_5 = (signed char)-34;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)5163;
signed char var_8 = (signed char)-7;
long long int var_9 = -3946957646911846481LL;
unsigned char var_10 = (unsigned char)56;
int var_12 = -1930452411;
long long int var_13 = 6896793282365450776LL;
long long int var_14 = -8113328189650885502LL;
int zero = 0;
unsigned short var_15 = (unsigned short)42891;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
