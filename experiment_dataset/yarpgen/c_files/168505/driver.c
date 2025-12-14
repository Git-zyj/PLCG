#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 690833451;
unsigned short var_2 = (unsigned short)30293;
unsigned long long int var_3 = 13027245192158097087ULL;
long long int var_6 = -4528404635496824280LL;
int zero = 0;
long long int var_13 = -6419110175997194326LL;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)38374;
void init() {
}

void checksum() {
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
