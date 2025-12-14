#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-54;
long long int var_3 = -6474202757383531986LL;
unsigned char var_5 = (unsigned char)148;
unsigned short var_8 = (unsigned short)23150;
int var_9 = 1846487881;
_Bool var_10 = (_Bool)1;
signed char var_12 = (signed char)53;
signed char var_15 = (signed char)-110;
int zero = 0;
unsigned short var_16 = (unsigned short)60835;
long long int var_17 = 4224018599999228973LL;
unsigned int var_18 = 222604488U;
unsigned int var_19 = 965821040U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
