#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-41;
signed char var_9 = (signed char)-110;
unsigned short var_12 = (unsigned short)50947;
long long int var_15 = -977055082698444350LL;
long long int var_18 = -4957796888194926598LL;
int zero = 0;
unsigned int var_19 = 3983075065U;
unsigned int var_20 = 1270106647U;
_Bool var_21 = (_Bool)0;
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
