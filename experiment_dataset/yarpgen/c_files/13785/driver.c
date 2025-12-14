#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8994972791659846146LL;
unsigned char var_7 = (unsigned char)195;
long long int var_8 = 6151798589121518060LL;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 724140913U;
signed char var_15 = (signed char)-4;
int var_16 = -1878346949;
int zero = 0;
signed char var_17 = (signed char)-113;
unsigned short var_18 = (unsigned short)21064;
int var_19 = 1243993927;
void init() {
}

void checksum() {
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
