#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)20;
int var_2 = 49464462;
_Bool var_3 = (_Bool)0;
long long int var_4 = -6184440713149484494LL;
unsigned long long int var_6 = 7118859887387754453ULL;
unsigned long long int var_7 = 1787130595048344340ULL;
int zero = 0;
unsigned long long int var_10 = 2156077452842098326ULL;
long long int var_11 = -5150492309360030933LL;
unsigned long long int var_12 = 16000298753739889411ULL;
unsigned long long int var_13 = 13039204933849776439ULL;
int var_14 = 140629322;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
