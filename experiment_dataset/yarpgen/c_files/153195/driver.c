#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16912;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 2956327139363229535ULL;
unsigned long long int var_3 = 1338500098472314573ULL;
short var_5 = (short)11676;
unsigned int var_7 = 1205948706U;
unsigned char var_10 = (unsigned char)162;
signed char var_11 = (signed char)-127;
short var_16 = (short)-588;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 339864233972666678ULL;
int zero = 0;
long long int var_20 = 5472667592163579616LL;
short var_21 = (short)-24806;
long long int var_22 = -6021747394552526843LL;
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
