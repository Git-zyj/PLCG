#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15730762787685330612ULL;
signed char var_3 = (signed char)-31;
unsigned long long int var_4 = 9731969786720174198ULL;
int var_5 = -700457356;
short var_7 = (short)23572;
int var_9 = -1527262393;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 3249687632U;
unsigned long long int var_12 = 15117842454140107076ULL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
