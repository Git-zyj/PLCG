#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2750730004U;
unsigned int var_1 = 1493870782U;
unsigned long long int var_2 = 2531669927599456042ULL;
signed char var_3 = (signed char)103;
short var_4 = (short)-18429;
int var_5 = -1458829057;
long long int var_6 = -5843595372405557289LL;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)41;
signed char var_9 = (signed char)125;
unsigned long long int var_11 = 4015613800979224429ULL;
unsigned int var_12 = 1098745987U;
_Bool var_13 = (_Bool)0;
int var_14 = -1723954444;
int zero = 0;
unsigned long long int var_15 = 10778595615895577360ULL;
unsigned long long int var_16 = 2586322327032423738ULL;
unsigned int var_17 = 2007063961U;
unsigned int var_18 = 1077179925U;
unsigned long long int var_19 = 13727902038320735134ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
