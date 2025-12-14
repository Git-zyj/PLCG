#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6409943540142031674LL;
unsigned short var_2 = (unsigned short)59273;
unsigned short var_3 = (unsigned short)52404;
short var_5 = (short)19710;
long long int var_6 = 27916273982025187LL;
unsigned short var_7 = (unsigned short)41592;
unsigned char var_9 = (unsigned char)8;
int var_13 = -54675168;
unsigned int var_19 = 3674204256U;
int zero = 0;
unsigned int var_20 = 569256794U;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-64;
unsigned int var_23 = 1431373628U;
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
