#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)35;
signed char var_5 = (signed char)33;
int var_7 = 1016684667;
_Bool var_9 = (_Bool)1;
long long int var_13 = 6828058608219212890LL;
short var_18 = (short)27010;
int zero = 0;
long long int var_20 = 4486527142546890942LL;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)180;
unsigned int var_23 = 911142168U;
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
