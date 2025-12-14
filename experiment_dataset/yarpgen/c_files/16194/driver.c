#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1683291832136704833LL;
signed char var_4 = (signed char)-17;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)49784;
unsigned char var_11 = (unsigned char)188;
signed char var_13 = (signed char)-99;
int var_15 = -1462508719;
long long int var_19 = -4765055513159347507LL;
int zero = 0;
unsigned long long int var_20 = 12750535140706551026ULL;
long long int var_21 = -8129149184559855636LL;
signed char var_22 = (signed char)-15;
signed char var_23 = (signed char)-37;
unsigned int var_24 = 1631523273U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
