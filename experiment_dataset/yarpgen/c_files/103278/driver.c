#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-11;
unsigned long long int var_3 = 11440205419237425482ULL;
int var_4 = 1565237305;
unsigned int var_5 = 1448092998U;
long long int var_8 = 8395626932669514589LL;
unsigned int var_10 = 3856440518U;
long long int var_11 = -4102965117130091520LL;
_Bool var_13 = (_Bool)0;
long long int var_14 = 8622738447437770132LL;
short var_15 = (short)22961;
unsigned short var_16 = (unsigned short)27175;
short var_17 = (short)25074;
int zero = 0;
unsigned long long int var_18 = 10736804028837482314ULL;
unsigned long long int var_19 = 1863060384280162260ULL;
unsigned long long int var_20 = 12586233942444998853ULL;
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
