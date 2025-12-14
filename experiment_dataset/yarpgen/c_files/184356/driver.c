#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1364883855;
unsigned int var_2 = 3429034114U;
signed char var_3 = (signed char)-57;
unsigned short var_4 = (unsigned short)46886;
unsigned int var_5 = 386491427U;
int var_6 = -1489630779;
long long int var_11 = 5803817478140471008LL;
unsigned int var_13 = 1532375265U;
unsigned short var_14 = (unsigned short)43268;
_Bool var_15 = (_Bool)0;
unsigned int var_18 = 3600949050U;
int zero = 0;
long long int var_20 = 6816746172849526447LL;
unsigned int var_21 = 2966083355U;
unsigned int var_22 = 2591897895U;
unsigned long long int var_23 = 12569118674842016508ULL;
void init() {
}

void checksum() {
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
