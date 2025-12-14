#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 3116267968156689299LL;
long long int var_6 = 1105929746089111951LL;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)0;
_Bool var_12 = (_Bool)0;
_Bool var_15 = (_Bool)0;
long long int var_16 = 8578613109602231710LL;
_Bool var_17 = (_Bool)1;
_Bool var_19 = (_Bool)1;
int zero = 0;
long long int var_20 = 9073766248921662212LL;
long long int var_21 = -6431346718160797695LL;
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
