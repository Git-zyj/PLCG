#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-11340;
_Bool var_2 = (_Bool)0;
short var_3 = (short)28197;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 13383394378911992041ULL;
short var_7 = (short)9326;
unsigned long long int var_8 = 9699928560936156420ULL;
unsigned int var_10 = 2146837339U;
signed char var_11 = (signed char)-123;
unsigned short var_13 = (unsigned short)50149;
int zero = 0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
