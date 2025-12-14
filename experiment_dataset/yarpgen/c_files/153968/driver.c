#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13863981613442978118ULL;
long long int var_3 = -1626313931140941630LL;
signed char var_4 = (signed char)-107;
signed char var_6 = (signed char)-95;
_Bool var_10 = (_Bool)0;
int var_15 = -571728561;
int zero = 0;
signed char var_18 = (signed char)-78;
unsigned int var_19 = 3587347775U;
void init() {
}

void checksum() {
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
