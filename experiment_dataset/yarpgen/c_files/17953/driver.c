#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 59917561;
long long int var_6 = -7316727548503067123LL;
long long int var_7 = 6159257534904972598LL;
signed char var_8 = (signed char)-55;
signed char var_9 = (signed char)-87;
int var_10 = -1923715714;
long long int var_12 = -2111815220764266583LL;
unsigned int var_14 = 2911655452U;
unsigned short var_16 = (unsigned short)23692;
int var_17 = -1244960234;
unsigned long long int var_18 = 3461778287429121428ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)33843;
unsigned short var_20 = (unsigned short)49351;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 1550958889784936973ULL;
signed char var_23 = (signed char)-125;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
