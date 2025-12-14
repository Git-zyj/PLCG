#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 394815807;
int var_2 = -437975878;
_Bool var_4 = (_Bool)0;
_Bool var_9 = (_Bool)0;
long long int var_13 = 4947304169226505340LL;
unsigned char var_15 = (unsigned char)90;
unsigned char var_17 = (unsigned char)114;
int zero = 0;
int var_18 = 1249276694;
signed char var_19 = (signed char)-67;
long long int var_20 = 95388155154057189LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
