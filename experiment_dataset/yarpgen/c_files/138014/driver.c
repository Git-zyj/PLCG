#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5515531979557628090LL;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)242;
unsigned char var_7 = (unsigned char)181;
signed char var_8 = (signed char)-127;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -6402967053963478672LL;
unsigned int var_12 = 2222021896U;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3062508354U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
