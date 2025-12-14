#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-63;
unsigned short var_1 = (unsigned short)51752;
unsigned char var_2 = (unsigned char)67;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 3604820329U;
long long int var_9 = -4973755072042566840LL;
int zero = 0;
unsigned short var_10 = (unsigned short)44707;
unsigned char var_11 = (unsigned char)3;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
