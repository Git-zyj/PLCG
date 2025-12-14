#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16834443386801270195ULL;
unsigned long long int var_1 = 14608506089495282567ULL;
int var_3 = -1122218869;
long long int var_5 = 6885881748035077582LL;
unsigned long long int var_6 = 17408533107437518095ULL;
unsigned short var_9 = (unsigned short)55359;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)28354;
signed char var_12 = (signed char)90;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
