#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7978013139527537274ULL;
signed char var_5 = (signed char)12;
unsigned long long int var_7 = 16744223895812373423ULL;
long long int var_9 = 8897525522986422447LL;
unsigned long long int var_10 = 10549086538306284304ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = -6758326436481818083LL;
unsigned short var_16 = (unsigned short)13781;
unsigned short var_17 = (unsigned short)5068;
signed char var_18 = (signed char)-23;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
