#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42058;
signed char var_1 = (signed char)-25;
int var_3 = 112622880;
unsigned short var_9 = (unsigned short)51482;
long long int var_10 = 832019914236622815LL;
signed char var_11 = (signed char)0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)80;
int zero = 0;
unsigned long long int var_17 = 5032946039940359031ULL;
unsigned int var_18 = 3130576951U;
unsigned int var_19 = 404364123U;
short var_20 = (short)20627;
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
