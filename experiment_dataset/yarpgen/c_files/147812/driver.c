#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4318066544677329078LL;
unsigned char var_1 = (unsigned char)89;
short var_2 = (short)-30487;
unsigned int var_3 = 1760850038U;
unsigned char var_4 = (unsigned char)102;
unsigned long long int var_6 = 1657355012064426502ULL;
unsigned short var_7 = (unsigned short)2163;
unsigned int var_10 = 3456964486U;
int zero = 0;
unsigned long long int var_12 = 1387546892428974032ULL;
long long int var_13 = 4071557924214048547LL;
signed char var_14 = (signed char)-98;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 13349377174311811308ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
