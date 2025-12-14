#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-93;
long long int var_7 = 3476795437448517266LL;
signed char var_9 = (signed char)(-127 - 1);
unsigned long long int var_11 = 2780733179568968431ULL;
signed char var_13 = (signed char)-51;
int var_14 = 1685193354;
unsigned long long int var_15 = 6578010726549405605ULL;
long long int var_16 = -1481117362972562148LL;
unsigned char var_17 = (unsigned char)82;
int zero = 0;
long long int var_19 = 4969546061138703448LL;
unsigned char var_20 = (unsigned char)160;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 8467642379806766654ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
