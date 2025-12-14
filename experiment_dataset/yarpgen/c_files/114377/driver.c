#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12473012285451425855ULL;
signed char var_2 = (signed char)-68;
signed char var_4 = (signed char)-90;
signed char var_5 = (signed char)39;
unsigned char var_6 = (unsigned char)81;
unsigned char var_7 = (unsigned char)100;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)94;
long long int var_11 = -439205295700367771LL;
int zero = 0;
unsigned long long int var_13 = 3615447516471829734ULL;
int var_14 = 979570064;
signed char var_15 = (signed char)35;
void init() {
}

void checksum() {
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
