#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-25901;
unsigned int var_4 = 2464940739U;
signed char var_5 = (signed char)-65;
long long int var_6 = 7626715835705484200LL;
long long int var_7 = 2620301577322168966LL;
int var_9 = 1213260667;
signed char var_10 = (signed char)27;
int zero = 0;
signed char var_11 = (signed char)-109;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
