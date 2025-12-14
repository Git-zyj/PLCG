#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1038137047;
unsigned char var_3 = (unsigned char)57;
short var_4 = (short)31956;
int var_6 = -711262222;
signed char var_8 = (signed char)6;
long long int var_14 = -5524178624198458004LL;
int zero = 0;
unsigned char var_17 = (unsigned char)95;
short var_18 = (short)-4036;
unsigned int var_19 = 4130737014U;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
