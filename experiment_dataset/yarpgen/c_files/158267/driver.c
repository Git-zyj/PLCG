#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)5;
unsigned int var_6 = 3594964381U;
long long int var_7 = 6912265663728597927LL;
signed char var_10 = (signed char)-44;
unsigned char var_12 = (unsigned char)183;
int var_13 = -213156108;
long long int var_15 = -3434164253855486178LL;
int zero = 0;
int var_17 = 2062232278;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)38980;
unsigned char var_20 = (unsigned char)89;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
