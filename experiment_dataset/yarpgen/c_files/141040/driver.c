#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3629165449413746718LL;
unsigned short var_6 = (unsigned short)62795;
_Bool var_10 = (_Bool)0;
short var_14 = (short)32187;
long long int var_17 = -4909751742839672891LL;
int zero = 0;
unsigned short var_18 = (unsigned short)43332;
long long int var_19 = -8218841378316168519LL;
long long int var_20 = 5421408556210013553LL;
_Bool var_21 = (_Bool)1;
long long int var_22 = -8415354820343470534LL;
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
