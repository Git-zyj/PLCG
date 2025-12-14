#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)10199;
signed char var_3 = (signed char)40;
unsigned long long int var_5 = 8120919532367588117ULL;
unsigned short var_12 = (unsigned short)10163;
unsigned short var_15 = (unsigned short)56339;
signed char var_16 = (signed char)107;
int zero = 0;
long long int var_17 = -6311031091750271048LL;
unsigned short var_18 = (unsigned short)47726;
signed char var_19 = (signed char)32;
void init() {
}

void checksum() {
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
