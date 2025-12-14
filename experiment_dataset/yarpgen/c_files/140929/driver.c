#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)74;
signed char var_1 = (signed char)-18;
short var_2 = (short)-11533;
unsigned char var_3 = (unsigned char)149;
signed char var_4 = (signed char)44;
long long int var_5 = 8916534410532712136LL;
short var_6 = (short)5723;
int var_9 = -974726953;
signed char var_11 = (signed char)-42;
int zero = 0;
long long int var_12 = 4773603919203878579LL;
signed char var_13 = (signed char)-30;
unsigned short var_14 = (unsigned short)47678;
long long int var_15 = -1991305095377623755LL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
