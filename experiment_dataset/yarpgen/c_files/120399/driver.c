#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25309;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)35;
unsigned long long int var_5 = 2477754935228963160ULL;
unsigned int var_6 = 4082706396U;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 2195068626U;
short var_11 = (short)-4268;
unsigned short var_15 = (unsigned short)30889;
int var_17 = 1987525466;
short var_18 = (short)9499;
int zero = 0;
short var_19 = (short)29215;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 2294954654U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
