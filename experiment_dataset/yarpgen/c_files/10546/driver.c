#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = -5446124238452512900LL;
long long int var_6 = 6334168123036777550LL;
unsigned long long int var_9 = 14696846709096056112ULL;
unsigned short var_10 = (unsigned short)61395;
signed char var_13 = (signed char)-70;
unsigned char var_16 = (unsigned char)98;
long long int var_17 = 7490982018560357020LL;
int zero = 0;
signed char var_18 = (signed char)61;
unsigned long long int var_19 = 5790476748089936338ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
