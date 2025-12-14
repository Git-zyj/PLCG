#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10809412025783189879ULL;
unsigned long long int var_8 = 16760306462455454455ULL;
_Bool var_9 = (_Bool)0;
unsigned short var_13 = (unsigned short)32062;
unsigned short var_16 = (unsigned short)49127;
int zero = 0;
unsigned long long int var_17 = 9489964890768998680ULL;
long long int var_18 = -6339030367504705783LL;
unsigned short var_19 = (unsigned short)55821;
unsigned short var_20 = (unsigned short)64726;
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
