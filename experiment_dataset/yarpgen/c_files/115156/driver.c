#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 4016294639U;
unsigned int var_8 = 2221048410U;
short var_9 = (short)27855;
signed char var_10 = (signed char)-79;
unsigned int var_12 = 1173200711U;
signed char var_13 = (signed char)21;
unsigned int var_14 = 2673426482U;
int var_18 = 1963988433;
int zero = 0;
short var_20 = (short)-12087;
int var_21 = -171596466;
long long int var_22 = -3818608676541181940LL;
int var_23 = -1999624264;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
