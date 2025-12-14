#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14524;
int var_1 = 595309590;
short var_6 = (short)25784;
short var_9 = (short)27288;
long long int var_11 = -4604280964065847237LL;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-9781;
long long int var_19 = 5886687733307438331LL;
int zero = 0;
short var_20 = (short)24802;
long long int var_21 = 1581589197101378725LL;
short var_22 = (short)26593;
void init() {
}

void checksum() {
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
