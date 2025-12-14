#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-80;
signed char var_4 = (signed char)-56;
long long int var_8 = 2388834449479090445LL;
signed char var_12 = (signed char)123;
int zero = 0;
signed char var_18 = (signed char)58;
long long int var_19 = -3666013608395353080LL;
signed char var_20 = (signed char)60;
long long int var_21 = -5864999601652526849LL;
signed char var_22 = (signed char)-19;
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
