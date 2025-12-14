#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10785759744544529015ULL;
unsigned int var_2 = 1809741061U;
long long int var_5 = -5377533783161261552LL;
_Bool var_9 = (_Bool)1;
int var_11 = -696777349;
unsigned short var_14 = (unsigned short)20716;
int zero = 0;
signed char var_19 = (signed char)49;
int var_20 = -1623332331;
long long int var_21 = -4269833220957079232LL;
short var_22 = (short)-8753;
unsigned int var_23 = 2271908592U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
