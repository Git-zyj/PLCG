#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8863308828359441424LL;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)7677;
unsigned char var_3 = (unsigned char)77;
long long int var_5 = 8825777646641049628LL;
_Bool var_6 = (_Bool)1;
signed char var_10 = (signed char)11;
int zero = 0;
signed char var_12 = (signed char)13;
unsigned long long int var_13 = 5237602563631437620ULL;
unsigned short var_14 = (unsigned short)11169;
unsigned short var_15 = (unsigned short)36237;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
