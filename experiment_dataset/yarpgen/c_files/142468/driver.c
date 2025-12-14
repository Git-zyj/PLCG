#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)96;
unsigned int var_1 = 696720779U;
short var_2 = (short)-4531;
signed char var_5 = (signed char)-27;
_Bool var_6 = (_Bool)0;
int var_7 = 269077150;
long long int var_9 = -4438958459094621422LL;
int var_11 = -631027079;
int var_13 = 1229537145;
int zero = 0;
signed char var_19 = (signed char)-36;
unsigned short var_20 = (unsigned short)45104;
unsigned long long int var_21 = 6671652500220608178ULL;
signed char var_22 = (signed char)-98;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
