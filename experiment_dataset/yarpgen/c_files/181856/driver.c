#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1340931574;
signed char var_3 = (signed char)-115;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-890;
int var_6 = 264530152;
signed char var_7 = (signed char)79;
unsigned short var_11 = (unsigned short)20045;
long long int var_17 = 4341580043513106027LL;
int zero = 0;
unsigned long long int var_18 = 16583843670074536888ULL;
long long int var_19 = -4897200550310546328LL;
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
