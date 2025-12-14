#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4072108083027095382LL;
signed char var_1 = (signed char)93;
unsigned char var_5 = (unsigned char)65;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)37676;
long long int var_12 = -1811233923668143212LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 13394072834351706146ULL;
unsigned long long int var_15 = 8453105246087933630ULL;
_Bool var_16 = (_Bool)1;
int var_17 = -1225068917;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
