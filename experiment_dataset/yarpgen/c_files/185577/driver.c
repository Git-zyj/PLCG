#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-111;
unsigned short var_3 = (unsigned short)44339;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
long long int var_8 = 8301376774423040543LL;
signed char var_9 = (signed char)-114;
unsigned int var_14 = 2522502024U;
long long int var_15 = -3729826575357379108LL;
int zero = 0;
unsigned int var_17 = 3071728285U;
int var_18 = -1096266185;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
