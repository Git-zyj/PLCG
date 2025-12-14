#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 27084666;
unsigned long long int var_2 = 17919701575156672662ULL;
_Bool var_4 = (_Bool)1;
long long int var_11 = 7923711899206241690LL;
signed char var_14 = (signed char)96;
int zero = 0;
int var_18 = -779101174;
unsigned short var_19 = (unsigned short)18601;
short var_20 = (short)14635;
unsigned char var_21 = (unsigned char)193;
unsigned long long int var_22 = 17206545507907230279ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
