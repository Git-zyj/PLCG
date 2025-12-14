#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)-107;
long long int var_7 = -4466330090929514942LL;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 609152314U;
unsigned long long int var_12 = 15693215076820505530ULL;
int var_15 = 115853889;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_17 = (short)32694;
long long int var_18 = -5111776175211271910LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
