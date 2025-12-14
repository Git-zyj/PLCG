#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1301344793U;
signed char var_5 = (signed char)-39;
short var_7 = (short)5757;
int var_9 = -2146296333;
int zero = 0;
long long int var_10 = -6971285473990324279LL;
signed char var_11 = (signed char)-84;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
