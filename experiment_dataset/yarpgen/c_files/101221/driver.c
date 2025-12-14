#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4141374728714881682LL;
short var_1 = (short)8863;
long long int var_5 = -2776194731935849007LL;
int var_6 = -1220081510;
unsigned int var_8 = 2781059592U;
short var_14 = (short)-31320;
int zero = 0;
short var_17 = (short)-19932;
unsigned long long int var_18 = 14051231609757559078ULL;
_Bool var_19 = (_Bool)1;
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
