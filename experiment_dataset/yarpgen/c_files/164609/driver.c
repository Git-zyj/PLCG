#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 941733856;
signed char var_5 = (signed char)-67;
unsigned int var_6 = 976288642U;
unsigned short var_7 = (unsigned short)33118;
long long int var_8 = 574411114058746249LL;
unsigned int var_10 = 3042720495U;
int var_12 = 703128520;
signed char var_13 = (signed char)52;
int zero = 0;
unsigned long long int var_16 = 10391216832805300193ULL;
long long int var_17 = 7597047368538644023LL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
