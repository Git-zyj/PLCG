#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1016043184;
_Bool var_1 = (_Bool)0;
long long int var_3 = -8138107115608962032LL;
unsigned short var_7 = (unsigned short)27636;
long long int var_9 = 8223326452080851874LL;
unsigned long long int var_10 = 9821296583194684539ULL;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)45398;
long long int var_16 = -7977091169236115098LL;
int zero = 0;
long long int var_17 = 489368375412712586LL;
unsigned long long int var_18 = 13893296523556304403ULL;
int var_19 = 1371863983;
void init() {
}

void checksum() {
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
