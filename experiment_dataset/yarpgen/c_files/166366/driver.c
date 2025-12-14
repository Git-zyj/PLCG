#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26457;
unsigned long long int var_1 = 7830204197121412408ULL;
unsigned int var_5 = 3018138739U;
_Bool var_8 = (_Bool)1;
short var_11 = (short)1918;
_Bool var_13 = (_Bool)1;
unsigned short var_15 = (unsigned short)22037;
signed char var_18 = (signed char)-118;
int zero = 0;
signed char var_19 = (signed char)70;
int var_20 = 203528028;
signed char var_21 = (signed char)-34;
long long int var_22 = 3966177494354035386LL;
void init() {
}

void checksum() {
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
