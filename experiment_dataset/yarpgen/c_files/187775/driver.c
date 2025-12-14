#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)118;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 757423785474530305ULL;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)96;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)254;
signed char var_9 = (signed char)28;
unsigned char var_13 = (unsigned char)17;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)35320;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)57113;
signed char var_19 = (signed char)20;
int zero = 0;
short var_20 = (short)5513;
long long int var_21 = -8858880086072600859LL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
