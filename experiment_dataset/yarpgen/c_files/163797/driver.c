#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8625184458012280252LL;
int var_6 = 1250343772;
unsigned int var_8 = 1783821321U;
long long int var_10 = 8377435969903928819LL;
unsigned long long int var_11 = 1576338044843150085ULL;
unsigned char var_12 = (unsigned char)24;
_Bool var_13 = (_Bool)1;
long long int var_14 = 3688993202885221359LL;
int zero = 0;
unsigned short var_17 = (unsigned short)47439;
unsigned char var_18 = (unsigned char)172;
void init() {
}

void checksum() {
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
