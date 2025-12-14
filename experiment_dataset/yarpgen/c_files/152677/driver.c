#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15850739969420012763ULL;
signed char var_1 = (signed char)-51;
signed char var_2 = (signed char)-16;
int var_5 = 1981999900;
_Bool var_10 = (_Bool)0;
_Bool var_14 = (_Bool)1;
unsigned short var_16 = (unsigned short)15042;
signed char var_18 = (signed char)111;
int zero = 0;
signed char var_19 = (signed char)44;
int var_20 = -456501416;
unsigned int var_21 = 1784049058U;
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
