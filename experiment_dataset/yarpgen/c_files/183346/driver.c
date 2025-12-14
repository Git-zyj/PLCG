#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 429103073419711268LL;
short var_2 = (short)-56;
long long int var_6 = -4119467569336434286LL;
int var_7 = -1547687745;
signed char var_9 = (signed char)43;
long long int var_14 = 4511269605400536172LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)66;
int var_17 = 1955185228;
unsigned int var_18 = 3410824641U;
int var_19 = 950573095;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
