#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)90;
long long int var_1 = -4903709045252714856LL;
_Bool var_2 = (_Bool)0;
long long int var_3 = 4780568724673163704LL;
signed char var_4 = (signed char)80;
unsigned int var_5 = 3568312239U;
signed char var_6 = (signed char)11;
signed char var_7 = (signed char)1;
unsigned int var_8 = 570902794U;
short var_9 = (short)30553;
_Bool var_10 = (_Bool)1;
int zero = 0;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 69486280U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
