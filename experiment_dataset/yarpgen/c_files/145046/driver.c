#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -388842581;
int var_1 = 81865816;
signed char var_4 = (signed char)11;
int var_5 = 1467370911;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_16 = -2042788468;
int var_17 = -691968929;
int var_18 = 1056042387;
unsigned short var_19 = (unsigned short)52319;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
