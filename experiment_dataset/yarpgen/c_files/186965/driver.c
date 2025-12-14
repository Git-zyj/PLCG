#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31489;
unsigned short var_1 = (unsigned short)61545;
int var_3 = -443607653;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)53;
int var_6 = -656097118;
long long int var_7 = 2095145162304041298LL;
unsigned short var_9 = (unsigned short)14677;
signed char var_11 = (signed char)-91;
int zero = 0;
unsigned long long int var_13 = 8755392154973861324ULL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
