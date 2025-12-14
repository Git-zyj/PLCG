#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 112315204U;
unsigned long long int var_3 = 3859056440761107754ULL;
int var_7 = 419897993;
_Bool var_8 = (_Bool)1;
short var_12 = (short)-5102;
int zero = 0;
short var_18 = (short)12430;
long long int var_19 = -979183339522735504LL;
unsigned char var_20 = (unsigned char)122;
unsigned int var_21 = 3207548493U;
long long int var_22 = 6631095925789915138LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
