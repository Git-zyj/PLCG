#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3356397983U;
long long int var_3 = -3670608913700014565LL;
int var_4 = 294994257;
signed char var_5 = (signed char)108;
signed char var_6 = (signed char)60;
signed char var_8 = (signed char)83;
unsigned int var_9 = 2841224361U;
unsigned short var_11 = (unsigned short)37717;
unsigned long long int var_14 = 5126297694296554878ULL;
unsigned short var_15 = (unsigned short)46353;
int zero = 0;
short var_18 = (short)22373;
short var_19 = (short)475;
_Bool var_20 = (_Bool)0;
long long int var_21 = 6269568269267448231LL;
int var_22 = 1039119204;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
