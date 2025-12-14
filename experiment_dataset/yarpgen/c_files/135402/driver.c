#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)110;
_Bool var_1 = (_Bool)0;
unsigned long long int var_4 = 5806286789145368199ULL;
signed char var_5 = (signed char)86;
unsigned long long int var_8 = 7421454652942569362ULL;
signed char var_11 = (signed char)41;
long long int var_13 = -4065291313679658200LL;
int var_15 = 190490899;
int var_17 = 268299658;
int zero = 0;
long long int var_18 = -2758666480062092183LL;
unsigned long long int var_19 = 2015921882322278931ULL;
unsigned short var_20 = (unsigned short)25091;
void init() {
}

void checksum() {
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
