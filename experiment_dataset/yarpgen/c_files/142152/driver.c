#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3136614937729815932LL;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)10053;
_Bool var_5 = (_Bool)1;
long long int var_6 = 8167789760194647610LL;
signed char var_7 = (signed char)-92;
unsigned int var_8 = 4190386251U;
signed char var_9 = (signed char)31;
short var_10 = (short)10259;
signed char var_11 = (signed char)-110;
int zero = 0;
short var_13 = (short)3593;
signed char var_14 = (signed char)-44;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
