#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-16;
unsigned char var_1 = (unsigned char)73;
unsigned int var_4 = 3699089830U;
long long int var_6 = 6711878598197889477LL;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)27;
unsigned int var_12 = 2968259845U;
unsigned int var_13 = 3959080158U;
int var_14 = 729345883;
short var_15 = (short)8398;
signed char var_16 = (signed char)-103;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 1434015142509051338ULL;
unsigned char var_19 = (unsigned char)59;
int var_20 = -2079965524;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)90;
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
