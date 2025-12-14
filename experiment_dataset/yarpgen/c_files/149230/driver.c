#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6987019786695162208LL;
_Bool var_4 = (_Bool)0;
int var_7 = 1501817799;
signed char var_10 = (signed char)-30;
long long int var_11 = -5668916426607789599LL;
int zero = 0;
int var_19 = 1526480699;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)62427;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
