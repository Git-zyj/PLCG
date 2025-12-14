#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-52;
signed char var_3 = (signed char)-34;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 565648975U;
long long int var_9 = -6338041175898135337LL;
signed char var_11 = (signed char)-9;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_20 = -705878774;
unsigned int var_21 = 2875405065U;
unsigned short var_22 = (unsigned short)22871;
unsigned long long int var_23 = 12538251480508657464ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
