#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-69;
unsigned short var_5 = (unsigned short)1532;
unsigned int var_6 = 3551712638U;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)51821;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 3623134227U;
short var_12 = (short)8864;
int zero = 0;
unsigned long long int var_15 = 3480499025202149103ULL;
unsigned short var_16 = (unsigned short)56195;
int var_17 = -1124582593;
unsigned int var_18 = 2973224688U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
