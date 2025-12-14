#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)117;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)43;
unsigned short var_8 = (unsigned short)27820;
short var_10 = (short)10079;
signed char var_12 = (signed char)-91;
int zero = 0;
long long int var_13 = 7669063768873423149LL;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)166;
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
