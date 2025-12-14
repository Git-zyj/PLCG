#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3777568350U;
unsigned long long int var_4 = 8435039750827726619ULL;
unsigned int var_8 = 3403060093U;
unsigned long long int var_9 = 2566347171507437319ULL;
long long int var_11 = -7160451840189286418LL;
short var_12 = (short)-18716;
short var_15 = (short)-13615;
unsigned long long int var_17 = 6119203867648500253ULL;
int zero = 0;
signed char var_18 = (signed char)74;
unsigned long long int var_19 = 12656260611399412356ULL;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)13037;
unsigned char var_22 = (unsigned char)80;
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
