#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-104;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
int var_7 = -619672788;
short var_8 = (short)21978;
long long int var_10 = -7400207719732404111LL;
unsigned long long int var_11 = 5706750648603385081ULL;
int zero = 0;
int var_17 = 309274064;
int var_18 = -913385270;
unsigned int var_19 = 3434394547U;
int var_20 = -1383900769;
long long int var_21 = -5959123596091926528LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
