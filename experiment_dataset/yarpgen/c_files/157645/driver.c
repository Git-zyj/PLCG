#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)58;
short var_4 = (short)14754;
long long int var_6 = -3344623088290242413LL;
_Bool var_8 = (_Bool)0;
long long int var_10 = 5008114167902936470LL;
short var_12 = (short)24013;
_Bool var_13 = (_Bool)0;
unsigned char var_15 = (unsigned char)14;
unsigned long long int var_16 = 5977847749535335556ULL;
int zero = 0;
unsigned long long int var_18 = 3799820973194140ULL;
signed char var_19 = (signed char)-107;
unsigned short var_20 = (unsigned short)30666;
unsigned short var_21 = (unsigned short)54148;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
