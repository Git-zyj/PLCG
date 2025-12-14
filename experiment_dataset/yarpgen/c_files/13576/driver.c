#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-21;
long long int var_9 = 7868276584251241198LL;
int var_10 = 1877174574;
signed char var_11 = (signed char)59;
signed char var_14 = (signed char)-118;
short var_17 = (short)20481;
unsigned long long int var_18 = 438545692139728496ULL;
int zero = 0;
signed char var_20 = (signed char)-39;
long long int var_21 = 1464304516079116267LL;
unsigned long long int var_22 = 1416746760055438939ULL;
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
