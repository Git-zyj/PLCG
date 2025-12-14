#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)23657;
long long int var_7 = 7472901415155034019LL;
unsigned short var_13 = (unsigned short)19976;
unsigned short var_15 = (unsigned short)51536;
long long int var_17 = 5350019664212797141LL;
int var_18 = -385193842;
int zero = 0;
unsigned long long int var_19 = 17876010539730240357ULL;
unsigned int var_20 = 1659529410U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
