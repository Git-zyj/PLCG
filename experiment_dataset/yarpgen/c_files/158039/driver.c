#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)43;
unsigned short var_3 = (unsigned short)4027;
unsigned int var_4 = 878523896U;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)50336;
unsigned char var_10 = (unsigned char)8;
signed char var_13 = (signed char)-101;
long long int var_16 = -4721051216824398902LL;
int zero = 0;
unsigned long long int var_17 = 16245419921276825112ULL;
unsigned long long int var_18 = 10228571721186699919ULL;
signed char var_19 = (signed char)28;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
