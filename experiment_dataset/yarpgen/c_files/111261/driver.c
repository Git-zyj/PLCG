#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)73;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)34;
unsigned short var_8 = (unsigned short)16276;
signed char var_9 = (signed char)-62;
unsigned char var_11 = (unsigned char)253;
unsigned long long int var_12 = 15611901053763702307ULL;
signed char var_13 = (signed char)-112;
_Bool var_17 = (_Bool)0;
_Bool var_19 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)-32;
unsigned int var_21 = 1954747830U;
unsigned short var_22 = (unsigned short)35232;
unsigned long long int var_23 = 4686139464027840605ULL;
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
