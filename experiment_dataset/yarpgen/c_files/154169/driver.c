#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-12;
unsigned long long int var_9 = 112966852544161033ULL;
unsigned long long int var_12 = 11350682835542419380ULL;
unsigned short var_16 = (unsigned short)42551;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_20 = (short)-27154;
unsigned long long int var_21 = 8515521791002489598ULL;
signed char var_22 = (signed char)67;
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
