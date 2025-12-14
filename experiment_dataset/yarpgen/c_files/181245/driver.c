#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4811955827267732947LL;
_Bool var_6 = (_Bool)1;
unsigned short var_10 = (unsigned short)6282;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
int var_17 = 210302931;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-90;
int zero = 0;
unsigned int var_20 = 3184793453U;
short var_21 = (short)26372;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)50350;
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
