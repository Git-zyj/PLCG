#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7006675022115576780LL;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)53;
long long int var_3 = -1170777702696843749LL;
short var_4 = (short)-13012;
unsigned long long int var_5 = 2096235684680991754ULL;
unsigned long long int var_6 = 5837343220626438825ULL;
_Bool var_9 = (_Bool)1;
int var_10 = 1982759557;
unsigned int var_13 = 2822199748U;
short var_14 = (short)27520;
long long int var_15 = -6836947277741294764LL;
int zero = 0;
unsigned char var_17 = (unsigned char)130;
short var_18 = (short)-3181;
unsigned char var_19 = (unsigned char)22;
void init() {
}

void checksum() {
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
