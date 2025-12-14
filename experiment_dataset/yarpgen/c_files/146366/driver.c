#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6424056050568414380LL;
short var_1 = (short)-25489;
unsigned long long int var_2 = 4876764793880333515ULL;
unsigned int var_3 = 1420449149U;
unsigned short var_4 = (unsigned short)44224;
long long int var_5 = -6027870639818760809LL;
long long int var_6 = -7116083222220737502LL;
unsigned long long int var_7 = 8329056247176361300ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_10 = (signed char)58;
long long int var_11 = 5096521746768596443LL;
unsigned long long int var_12 = 6768658422502191084ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
