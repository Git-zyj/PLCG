#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -250594987;
long long int var_7 = -6152403398814442539LL;
unsigned long long int var_11 = 15848236777069483726ULL;
int var_12 = 805015477;
int var_16 = 1591006510;
int zero = 0;
short var_17 = (short)9628;
long long int var_18 = 5921930563353343503LL;
unsigned short var_19 = (unsigned short)39455;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
