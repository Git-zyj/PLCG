#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5122;
signed char var_5 = (signed char)22;
_Bool var_7 = (_Bool)1;
int var_9 = 1262005332;
unsigned short var_10 = (unsigned short)39631;
int var_12 = 1381604195;
int zero = 0;
unsigned char var_15 = (unsigned char)244;
unsigned long long int var_16 = 8407910222243691683ULL;
long long int var_17 = -5229792165127007030LL;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 959916931951229424ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
