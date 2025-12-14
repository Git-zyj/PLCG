#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 6187111335656534505ULL;
long long int var_7 = 6959331919271402110LL;
signed char var_12 = (signed char)82;
long long int var_13 = 2065971840213397499LL;
long long int var_14 = 3447989080156063686LL;
unsigned char var_16 = (unsigned char)235;
unsigned short var_19 = (unsigned short)60963;
int zero = 0;
unsigned long long int var_20 = 4178506012531211377ULL;
int var_21 = -31085332;
_Bool var_22 = (_Bool)1;
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
