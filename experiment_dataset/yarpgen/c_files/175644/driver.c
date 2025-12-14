#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3840391120U;
long long int var_4 = 1295028011936949888LL;
long long int var_5 = -5917907457787420184LL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_8 = 16778129762003432296ULL;
long long int var_11 = 5197951839898566875LL;
int var_13 = -2112251873;
unsigned long long int var_15 = 225066813772927768ULL;
long long int var_16 = 4483227267166801138LL;
long long int var_17 = 4084277673127044266LL;
int zero = 0;
short var_18 = (short)17178;
short var_19 = (short)-18366;
signed char var_20 = (signed char)-49;
_Bool var_21 = (_Bool)1;
long long int var_22 = 500773649878960556LL;
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
