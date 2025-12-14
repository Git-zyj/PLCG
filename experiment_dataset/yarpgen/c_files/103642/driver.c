#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7906641629104587790LL;
signed char var_5 = (signed char)89;
unsigned short var_9 = (unsigned short)19151;
short var_11 = (short)-1364;
int var_13 = 1324245971;
unsigned short var_14 = (unsigned short)48027;
int zero = 0;
int var_15 = -754292698;
int var_16 = -173498446;
unsigned char var_17 = (unsigned char)133;
unsigned long long int var_18 = 15510465022416824793ULL;
_Bool var_19 = (_Bool)0;
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
