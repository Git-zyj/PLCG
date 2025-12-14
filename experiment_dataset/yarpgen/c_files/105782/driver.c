#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 15318496571639543959ULL;
_Bool var_13 = (_Bool)0;
signed char var_15 = (signed char)-94;
int zero = 0;
unsigned long long int var_18 = 12424936145269775197ULL;
unsigned long long int var_19 = 12176155157419379422ULL;
signed char var_20 = (signed char)55;
void init() {
}

void checksum() {
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
