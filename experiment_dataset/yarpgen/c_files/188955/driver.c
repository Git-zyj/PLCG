#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-127;
long long int var_4 = -6014515311791311931LL;
long long int var_6 = -3653188169116792057LL;
unsigned short var_7 = (unsigned short)15500;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-7;
unsigned int var_11 = 3541226517U;
int zero = 0;
unsigned int var_13 = 623063289U;
unsigned int var_14 = 56818719U;
void init() {
}

void checksum() {
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
