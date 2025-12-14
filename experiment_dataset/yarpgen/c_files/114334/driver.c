#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)254;
unsigned long long int var_1 = 11498140157575276190ULL;
long long int var_6 = -6280990119586909035LL;
unsigned long long int var_9 = 14341926691234029331ULL;
unsigned int var_12 = 4172592188U;
long long int var_13 = -8978999591281081900LL;
unsigned short var_18 = (unsigned short)27035;
long long int var_19 = 4075776438906062738LL;
int zero = 0;
signed char var_20 = (signed char)-33;
unsigned long long int var_21 = 11798470660031331441ULL;
long long int var_22 = 1845454358371334846LL;
unsigned long long int var_23 = 8157680708164269640ULL;
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
