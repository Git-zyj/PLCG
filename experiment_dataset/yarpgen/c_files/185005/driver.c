#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29093;
long long int var_2 = -650917189391224003LL;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-39;
int zero = 0;
int var_12 = 1124722230;
unsigned short var_13 = (unsigned short)46632;
short var_14 = (short)-32297;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
