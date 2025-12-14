#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-114;
long long int var_3 = 6091559385504475689LL;
unsigned char var_8 = (unsigned char)150;
unsigned char var_10 = (unsigned char)131;
signed char var_12 = (signed char)119;
int zero = 0;
unsigned short var_18 = (unsigned short)50807;
long long int var_19 = 1297540295863234376LL;
_Bool var_20 = (_Bool)0;
long long int var_21 = -2243740527395656221LL;
signed char var_22 = (signed char)-7;
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
