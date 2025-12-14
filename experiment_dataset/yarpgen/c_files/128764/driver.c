#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12715823777433120693ULL;
unsigned int var_2 = 897717363U;
unsigned int var_3 = 2222286440U;
unsigned short var_4 = (unsigned short)47810;
short var_6 = (short)15650;
unsigned char var_7 = (unsigned char)117;
signed char var_8 = (signed char)-84;
unsigned long long int var_10 = 8902389535575568692ULL;
signed char var_12 = (signed char)63;
int zero = 0;
long long int var_15 = -8215536764110380141LL;
long long int var_16 = 5758185829461353976LL;
short var_17 = (short)-19015;
short var_18 = (short)30886;
unsigned int var_19 = 4203081837U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
