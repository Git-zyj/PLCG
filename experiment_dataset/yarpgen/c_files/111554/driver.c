#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)216;
long long int var_1 = 4981251621846050315LL;
unsigned char var_2 = (unsigned char)251;
unsigned short var_3 = (unsigned short)8564;
long long int var_4 = -6116575618930074484LL;
long long int var_8 = 6222904877794322363LL;
unsigned short var_14 = (unsigned short)4859;
unsigned char var_19 = (unsigned char)199;
int zero = 0;
unsigned short var_20 = (unsigned short)44451;
_Bool var_21 = (_Bool)1;
long long int var_22 = -5501513254274747386LL;
void init() {
}

void checksum() {
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
