#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)166;
_Bool var_4 = (_Bool)1;
unsigned short var_13 = (unsigned short)56292;
long long int var_15 = 3741897881288385203LL;
signed char var_16 = (signed char)-16;
long long int var_18 = -6296488823625011281LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 4916563465083437696ULL;
long long int var_21 = -3478188475076357070LL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
