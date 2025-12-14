#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47704;
unsigned short var_1 = (unsigned short)64456;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-120;
signed char var_5 = (signed char)-61;
unsigned short var_7 = (unsigned short)60102;
long long int var_8 = 3174969414314298251LL;
signed char var_9 = (signed char)63;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
signed char var_16 = (signed char)120;
int var_17 = 103044342;
int zero = 0;
signed char var_18 = (signed char)-110;
unsigned short var_19 = (unsigned short)12481;
unsigned int var_20 = 1952413716U;
unsigned short var_21 = (unsigned short)1423;
unsigned short var_22 = (unsigned short)9081;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
