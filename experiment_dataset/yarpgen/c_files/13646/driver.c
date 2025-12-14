#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_3 = (signed char)-91;
signed char var_4 = (signed char)-31;
unsigned long long int var_5 = 2444772280644853212ULL;
long long int var_6 = -4085415936300923071LL;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)26305;
unsigned int var_9 = 2792412U;
unsigned int var_14 = 3617135578U;
short var_15 = (short)-19814;
int zero = 0;
int var_17 = 1522059230;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)5;
void init() {
}

void checksum() {
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
