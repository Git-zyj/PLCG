#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16775;
unsigned long long int var_4 = 4030638402465093448ULL;
signed char var_5 = (signed char)7;
signed char var_11 = (signed char)45;
unsigned short var_12 = (unsigned short)632;
int zero = 0;
unsigned int var_15 = 482436566U;
unsigned long long int var_16 = 7410178575019002072ULL;
long long int var_17 = -2102174371640490319LL;
long long int var_18 = -1370690308703726476LL;
unsigned long long int var_19 = 3655311929995152076ULL;
void init() {
}

void checksum() {
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
