#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-127;
unsigned char var_2 = (unsigned char)74;
long long int var_3 = -8323307166145584326LL;
int var_4 = -1755472544;
long long int var_11 = 131612103051902448LL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 2615216293837870912ULL;
unsigned long long int var_14 = 18192344042989409990ULL;
short var_15 = (short)25178;
unsigned char var_16 = (unsigned char)63;
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
