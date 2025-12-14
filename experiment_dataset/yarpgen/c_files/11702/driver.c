#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3231492344379337932LL;
long long int var_10 = -1514756596882007481LL;
short var_13 = (short)25733;
int zero = 0;
signed char var_20 = (signed char)-50;
short var_21 = (short)17563;
short var_22 = (short)10943;
void init() {
}

void checksum() {
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
