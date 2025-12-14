#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)26414;
short var_6 = (short)7101;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-11913;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)50110;
signed char var_13 = (signed char)-47;
_Bool var_14 = (_Bool)0;
short var_17 = (short)14359;
int zero = 0;
short var_18 = (short)-17421;
signed char var_19 = (signed char)88;
signed char var_20 = (signed char)-120;
signed char var_21 = (signed char)-26;
signed char var_22 = (signed char)-46;
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
