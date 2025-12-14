#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-81;
long long int var_1 = -8092797530233139949LL;
unsigned int var_2 = 434601927U;
int var_3 = 1939084065;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)-124;
unsigned int var_11 = 3761674276U;
signed char var_13 = (signed char)45;
signed char var_14 = (signed char)25;
unsigned long long int var_18 = 14854875364673369168ULL;
int zero = 0;
short var_19 = (short)-24547;
unsigned int var_20 = 189022418U;
unsigned char var_21 = (unsigned char)114;
void init() {
}

void checksum() {
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
