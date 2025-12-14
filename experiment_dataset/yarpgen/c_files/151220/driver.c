#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-82;
unsigned long long int var_3 = 5717762546107245831ULL;
unsigned char var_5 = (unsigned char)148;
unsigned short var_6 = (unsigned short)48555;
short var_8 = (short)-9998;
_Bool var_9 = (_Bool)0;
long long int var_10 = 6005355242285486019LL;
int zero = 0;
long long int var_11 = 8811781349302529656LL;
short var_12 = (short)-24228;
short var_13 = (short)13845;
int var_14 = -916000373;
int var_15 = 1760309637;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
