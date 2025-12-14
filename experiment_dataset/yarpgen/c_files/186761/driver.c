#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1547231519U;
short var_6 = (short)10737;
unsigned int var_7 = 2441693719U;
long long int var_10 = -8716903265695815521LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = -7431560213461442485LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
