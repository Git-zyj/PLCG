#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 902592120973808016ULL;
int var_7 = -1211630354;
long long int var_11 = -6713621412171277660LL;
short var_13 = (short)15289;
long long int var_14 = 547397457307898498LL;
short var_15 = (short)32752;
_Bool var_16 = (_Bool)0;
signed char var_18 = (signed char)-46;
int zero = 0;
short var_20 = (short)12034;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
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
