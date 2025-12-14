#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-65;
_Bool var_1 = (_Bool)1;
short var_2 = (short)16161;
unsigned char var_4 = (unsigned char)102;
unsigned long long int var_5 = 1760447118364778655ULL;
unsigned long long int var_6 = 2668148442884769532ULL;
unsigned short var_8 = (unsigned short)56665;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
long long int var_12 = -7093819984780481558LL;
_Bool var_18 = (_Bool)1;
int zero = 0;
int var_19 = 1231439691;
long long int var_20 = -384854159867000762LL;
unsigned int var_21 = 2520991637U;
signed char var_22 = (signed char)-66;
void init() {
}

void checksum() {
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
