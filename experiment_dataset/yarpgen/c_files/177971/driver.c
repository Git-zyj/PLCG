#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-3181;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
short var_7 = (short)18458;
long long int var_10 = -6591677185214343008LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = 2859272678410997551LL;
int var_20 = 1659820322;
long long int var_21 = -6869970145969904877LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
