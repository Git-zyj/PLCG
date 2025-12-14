#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)48;
long long int var_2 = 8274757783412876317LL;
long long int var_5 = 5460706032757349160LL;
unsigned char var_7 = (unsigned char)67;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)29007;
unsigned char var_10 = (unsigned char)46;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 4083526082229027585ULL;
unsigned char var_13 = (unsigned char)71;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
