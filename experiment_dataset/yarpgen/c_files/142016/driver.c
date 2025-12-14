#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 3152519295394175885LL;
long long int var_2 = 3592490046531907551LL;
signed char var_3 = (signed char)-51;
signed char var_4 = (signed char)9;
_Bool var_5 = (_Bool)1;
long long int var_6 = 7006535195079138425LL;
long long int var_10 = -3107121001447190868LL;
int zero = 0;
unsigned short var_11 = (unsigned short)2224;
long long int var_12 = 7028543569755658937LL;
unsigned int var_13 = 4281950442U;
long long int var_14 = 5195420051520895902LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
