#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1942747245;
_Bool var_5 = (_Bool)0;
_Bool var_8 = (_Bool)1;
short var_13 = (short)3440;
unsigned char var_18 = (unsigned char)126;
int zero = 0;
int var_20 = 1935472181;
unsigned long long int var_21 = 2238430730090933905ULL;
signed char var_22 = (signed char)-109;
unsigned long long int var_23 = 11630539368819423664ULL;
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
