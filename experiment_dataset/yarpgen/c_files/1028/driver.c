#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-38;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-42;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)12;
short var_5 = (short)13585;
long long int var_6 = 5151227063170545811LL;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)36652;
unsigned char var_10 = (unsigned char)195;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = -3355072093829128134LL;
signed char var_13 = (signed char)86;
signed char var_14 = (signed char)-62;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
