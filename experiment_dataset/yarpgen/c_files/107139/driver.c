#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8967856561108073011LL;
long long int var_6 = 4680553140929213559LL;
long long int var_7 = 2446639257485931987LL;
unsigned int var_8 = 2819753841U;
signed char var_11 = (signed char)124;
unsigned int var_13 = 1348860620U;
short var_14 = (short)27060;
int zero = 0;
unsigned short var_15 = (unsigned short)49860;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)9;
unsigned int var_18 = 2496303685U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
