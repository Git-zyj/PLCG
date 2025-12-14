#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)29;
int var_2 = 1090563597;
signed char var_4 = (signed char)59;
unsigned char var_7 = (unsigned char)163;
unsigned short var_8 = (unsigned short)57595;
long long int var_9 = -6279624603398821123LL;
short var_11 = (short)-17400;
unsigned long long int var_12 = 7303177379883688084ULL;
unsigned int var_15 = 2063107310U;
int var_16 = -60075408;
int zero = 0;
unsigned char var_18 = (unsigned char)28;
unsigned long long int var_19 = 12558948259558670541ULL;
void init() {
}

void checksum() {
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
