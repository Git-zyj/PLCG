#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-73;
signed char var_3 = (signed char)-15;
unsigned char var_7 = (unsigned char)208;
signed char var_10 = (signed char)-94;
_Bool var_15 = (_Bool)1;
unsigned short var_17 = (unsigned short)47327;
long long int var_18 = -7711641831932902226LL;
int zero = 0;
unsigned short var_20 = (unsigned short)52431;
signed char var_21 = (signed char)-11;
int var_22 = -652182478;
int var_23 = 1312435976;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
