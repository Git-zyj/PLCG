#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-114;
int var_6 = -1347828513;
short var_7 = (short)25543;
signed char var_8 = (signed char)-35;
long long int var_13 = 1455930333806641277LL;
int zero = 0;
short var_19 = (short)4435;
int var_20 = 2092054982;
int var_21 = -1392669470;
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
