#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)93;
unsigned short var_1 = (unsigned short)40551;
short var_5 = (short)-9291;
unsigned long long int var_7 = 10006684133188808649ULL;
_Bool var_8 = (_Bool)1;
long long int var_9 = -883778122841279655LL;
unsigned int var_12 = 695740965U;
short var_16 = (short)-27188;
int zero = 0;
short var_17 = (short)-2689;
int var_18 = -620974616;
short var_19 = (short)-26311;
signed char var_20 = (signed char)-92;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
