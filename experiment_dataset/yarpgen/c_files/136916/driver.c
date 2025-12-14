#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26637;
signed char var_2 = (signed char)-31;
unsigned int var_3 = 4045636535U;
unsigned char var_13 = (unsigned char)36;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)15519;
unsigned long long int var_19 = 18021323379347055411ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
