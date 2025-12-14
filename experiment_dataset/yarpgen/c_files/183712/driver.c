#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_3 = (signed char)-11;
unsigned long long int var_4 = 3712281961891122798ULL;
signed char var_5 = (signed char)22;
short var_7 = (short)-7596;
signed char var_8 = (signed char)14;
unsigned short var_9 = (unsigned short)45739;
short var_10 = (short)-13015;
signed char var_11 = (signed char)-66;
unsigned long long int var_12 = 1646191381699683960ULL;
signed char var_14 = (signed char)108;
signed char var_15 = (signed char)-18;
signed char var_18 = (signed char)-18;
int zero = 0;
signed char var_20 = (signed char)-79;
unsigned short var_21 = (unsigned short)50524;
long long int var_22 = 1520545657908167102LL;
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
