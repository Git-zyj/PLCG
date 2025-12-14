#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6241858088399529670LL;
short var_3 = (short)-3867;
_Bool var_4 = (_Bool)1;
int var_5 = -1244594510;
_Bool var_6 = (_Bool)1;
long long int var_9 = 3255256616561377342LL;
_Bool var_10 = (_Bool)1;
int var_12 = 1960719029;
signed char var_13 = (signed char)-60;
int zero = 0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
long long int var_16 = -5213621038064640391LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
