#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
long long int var_3 = 1265941527430474266LL;
unsigned long long int var_5 = 716751640600305425ULL;
long long int var_6 = 4117883372314076345LL;
signed char var_8 = (signed char)-117;
int var_9 = 670328743;
int zero = 0;
unsigned long long int var_10 = 9226021529953251035ULL;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-102;
int var_13 = 1322483906;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
