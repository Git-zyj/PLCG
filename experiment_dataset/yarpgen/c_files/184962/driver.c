#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21252;
signed char var_1 = (signed char)105;
long long int var_2 = 864543560490813954LL;
signed char var_4 = (signed char)88;
short var_5 = (short)-1380;
unsigned int var_7 = 1636058143U;
int var_9 = -1507026818;
long long int var_11 = -9071913630881422685LL;
unsigned long long int var_13 = 15778442843385284651ULL;
signed char var_16 = (signed char)123;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)231;
signed char var_20 = (signed char)7;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
