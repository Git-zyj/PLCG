#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -825585565;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)36;
unsigned long long int var_5 = 988080664443759896ULL;
long long int var_6 = -7807527676175283823LL;
unsigned char var_9 = (unsigned char)217;
int var_11 = -1456144600;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)-106;
unsigned int var_14 = 3740656991U;
unsigned long long int var_15 = 12653278958720530535ULL;
unsigned short var_16 = (unsigned short)47159;
unsigned long long int var_17 = 6977072214078062584ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
