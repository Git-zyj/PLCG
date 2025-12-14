#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4766707900097341785LL;
unsigned short var_3 = (unsigned short)6677;
unsigned long long int var_5 = 3184739430851539973ULL;
signed char var_7 = (signed char)-54;
unsigned int var_9 = 3151552964U;
signed char var_10 = (signed char)123;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 10215979772622936530ULL;
unsigned long long int var_15 = 1135124189144482889ULL;
short var_16 = (short)22623;
long long int var_18 = 1799932190601125923LL;
int zero = 0;
long long int var_19 = -5326224914996907157LL;
short var_20 = (short)2128;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
