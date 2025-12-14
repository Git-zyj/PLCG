#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5247213553622768857LL;
int var_4 = -1641070077;
long long int var_5 = -1730012715099266350LL;
signed char var_7 = (signed char)12;
int var_18 = 1063623867;
int zero = 0;
int var_19 = 144666060;
signed char var_20 = (signed char)74;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
