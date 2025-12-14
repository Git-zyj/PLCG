#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)126;
long long int var_2 = -7110049716339038591LL;
int var_3 = -1631833632;
int var_5 = -2124337033;
unsigned int var_9 = 1417325595U;
int zero = 0;
signed char var_11 = (signed char)-14;
unsigned long long int var_12 = 18216827830325514775ULL;
unsigned short var_13 = (unsigned short)28095;
short var_14 = (short)-20013;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
