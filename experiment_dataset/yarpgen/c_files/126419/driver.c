#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)29544;
_Bool var_3 = (_Bool)0;
int var_4 = 780031673;
long long int var_5 = 9011678315427350619LL;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)153;
int var_13 = 708092980;
long long int var_14 = 6727498351232255613LL;
long long int var_15 = 3534392100395396340LL;
int var_17 = 732969195;
int zero = 0;
long long int var_18 = -6179303374987818343LL;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)120;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
