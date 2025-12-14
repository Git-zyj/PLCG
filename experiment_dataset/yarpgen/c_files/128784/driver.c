#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11044970019928112547ULL;
short var_4 = (short)-29297;
_Bool var_6 = (_Bool)0;
int var_7 = 1055517920;
_Bool var_12 = (_Bool)0;
unsigned long long int var_15 = 3351986926437516796ULL;
int zero = 0;
signed char var_19 = (signed char)65;
long long int var_20 = -716383534216234196LL;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)-80;
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
