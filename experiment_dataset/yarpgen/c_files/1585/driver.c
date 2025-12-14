#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8597322213683007474LL;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)92;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
long long int var_8 = -2586651031782281211LL;
unsigned int var_10 = 518120606U;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
short var_13 = (short)58;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-2;
unsigned char var_16 = (unsigned char)105;
unsigned char var_17 = (unsigned char)18;
unsigned char var_18 = (unsigned char)110;
unsigned long long int var_19 = 9341435387742948760ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
