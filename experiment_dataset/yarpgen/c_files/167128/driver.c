#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 4157434803U;
long long int var_2 = -5662102121831507104LL;
signed char var_3 = (signed char)81;
signed char var_6 = (signed char)-110;
long long int var_10 = 955202170600756355LL;
int zero = 0;
signed char var_14 = (signed char)-26;
short var_15 = (short)-25726;
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
