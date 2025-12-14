#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)57;
int var_4 = 1383166870;
signed char var_5 = (signed char)-89;
int var_8 = 333892908;
signed char var_10 = (signed char)-53;
_Bool var_12 = (_Bool)1;
long long int var_13 = 7280098102627636851LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 4265604721U;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
