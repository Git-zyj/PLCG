#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15077;
unsigned short var_9 = (unsigned short)63;
long long int var_13 = 1049626971066387985LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 17529726384424620963ULL;
unsigned long long int var_20 = 17774189944044817979ULL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
