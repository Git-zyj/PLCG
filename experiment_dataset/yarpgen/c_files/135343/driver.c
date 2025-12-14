#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7804520068798057321LL;
short var_1 = (short)-13461;
long long int var_3 = 8493036196625495503LL;
long long int var_4 = -5896208468048968075LL;
short var_6 = (short)18211;
short var_7 = (short)30690;
short var_9 = (short)-6545;
short var_10 = (short)-13884;
short var_12 = (short)22398;
long long int var_14 = 1647386041364423507LL;
long long int var_15 = -6689284416150945217LL;
long long int var_17 = -387712215072383140LL;
int zero = 0;
long long int var_19 = -3872235276068969951LL;
long long int var_20 = -1995721799859693169LL;
long long int var_21 = 6762945667585819627LL;
short var_22 = (short)-20917;
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
