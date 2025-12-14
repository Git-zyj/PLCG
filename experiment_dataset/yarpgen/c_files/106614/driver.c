#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)-13;
long long int var_14 = 506877270603523036LL;
unsigned int var_15 = 3185881151U;
int zero = 0;
signed char var_18 = (signed char)-121;
unsigned int var_19 = 2603183000U;
unsigned char var_20 = (unsigned char)254;
short var_21 = (short)32162;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
