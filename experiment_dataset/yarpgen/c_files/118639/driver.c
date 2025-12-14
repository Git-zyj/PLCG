#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14908791576616285905ULL;
int var_4 = -1021578920;
short var_9 = (short)-5947;
int var_10 = 620165011;
unsigned char var_15 = (unsigned char)233;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_17 = -6703642228403200119LL;
long long int var_18 = -3134412932486069221LL;
unsigned long long int var_19 = 12446008619415251086ULL;
signed char var_20 = (signed char)-22;
long long int var_21 = 3881395056922245945LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
