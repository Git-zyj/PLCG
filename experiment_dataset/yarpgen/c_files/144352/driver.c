#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3135825348U;
signed char var_1 = (signed char)-3;
unsigned long long int var_4 = 10943747057714394748ULL;
int var_5 = 1738324628;
short var_6 = (short)30840;
unsigned char var_8 = (unsigned char)206;
unsigned int var_9 = 2330752834U;
int zero = 0;
unsigned char var_11 = (unsigned char)177;
long long int var_12 = 2944684791215435470LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
