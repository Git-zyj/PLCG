#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9867;
unsigned int var_2 = 2973228565U;
unsigned long long int var_3 = 2466049222902514472ULL;
signed char var_4 = (signed char)-112;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)41;
int var_10 = -1297921736;
int zero = 0;
int var_11 = 2052641405;
long long int var_12 = -7443092098028969819LL;
_Bool var_13 = (_Bool)0;
long long int var_14 = 7699131166978200527LL;
long long int var_15 = 4489099234446137898LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
