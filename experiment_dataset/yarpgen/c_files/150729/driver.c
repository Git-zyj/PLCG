#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2483355094626372498ULL;
unsigned long long int var_1 = 16502431741324684706ULL;
signed char var_5 = (signed char)-5;
_Bool var_6 = (_Bool)1;
short var_8 = (short)-28217;
unsigned int var_9 = 79831349U;
unsigned int var_12 = 3128824009U;
unsigned int var_14 = 2613248972U;
int var_15 = -2087983181;
int zero = 0;
signed char var_17 = (signed char)53;
unsigned long long int var_18 = 6832494717354544335ULL;
int var_19 = -241679221;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
