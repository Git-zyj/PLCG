#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-8;
unsigned char var_2 = (unsigned char)39;
unsigned char var_4 = (unsigned char)74;
_Bool var_7 = (_Bool)0;
unsigned long long int var_11 = 5233050474547467793ULL;
signed char var_12 = (signed char)-119;
int zero = 0;
long long int var_16 = 2917594116224474344LL;
short var_17 = (short)-11449;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-105;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
