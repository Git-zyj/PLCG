#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-20;
_Bool var_4 = (_Bool)0;
long long int var_5 = 7571618589317834493LL;
int zero = 0;
unsigned long long int var_11 = 3624585701872710010ULL;
short var_12 = (short)-17703;
short var_13 = (short)-462;
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
