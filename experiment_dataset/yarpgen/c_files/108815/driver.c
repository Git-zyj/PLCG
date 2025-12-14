#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)88;
unsigned short var_3 = (unsigned short)670;
signed char var_4 = (signed char)56;
unsigned int var_7 = 3225703823U;
unsigned char var_8 = (unsigned char)162;
int var_9 = -1476624103;
unsigned char var_10 = (unsigned char)214;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 4168450120U;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
