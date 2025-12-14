#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15835;
long long int var_2 = 3633559217324017001LL;
unsigned char var_3 = (unsigned char)238;
unsigned short var_12 = (unsigned short)572;
unsigned short var_14 = (unsigned short)53024;
unsigned int var_15 = 2308582223U;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 4232300925U;
int var_19 = 1530556654;
int zero = 0;
unsigned int var_20 = 4236889919U;
int var_21 = 702966464;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
