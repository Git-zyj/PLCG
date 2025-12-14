#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -5003731361091582357LL;
signed char var_6 = (signed char)39;
short var_7 = (short)-24142;
_Bool var_11 = (_Bool)1;
unsigned short var_16 = (unsigned short)41522;
long long int var_18 = -1888594064224629122LL;
int zero = 0;
unsigned int var_20 = 1353877256U;
signed char var_21 = (signed char)125;
void init() {
}

void checksum() {
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
