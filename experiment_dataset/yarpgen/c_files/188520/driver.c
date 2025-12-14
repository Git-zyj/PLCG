#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)11027;
long long int var_4 = 1501878213468926591LL;
unsigned long long int var_6 = 14447661256381897936ULL;
_Bool var_10 = (_Bool)1;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)-31;
int var_19 = -1378128498;
signed char var_20 = (signed char)8;
unsigned long long int var_21 = 240989962536885756ULL;
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
