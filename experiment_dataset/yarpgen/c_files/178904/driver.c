#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6109379998099658670LL;
signed char var_3 = (signed char)-40;
short var_4 = (short)21134;
unsigned short var_5 = (unsigned short)3843;
int var_6 = -1711700294;
int var_7 = 167186454;
unsigned short var_10 = (unsigned short)34601;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_16 = 249758466777477564LL;
long long int var_17 = -2324301464656221827LL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
