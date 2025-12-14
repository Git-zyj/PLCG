#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)8;
short var_1 = (short)-1326;
signed char var_2 = (signed char)34;
signed char var_3 = (signed char)-93;
int var_4 = -944209598;
int var_5 = -1298896920;
signed char var_7 = (signed char)-59;
unsigned long long int var_8 = 2017222702814123971ULL;
signed char var_9 = (signed char)103;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-8054;
int zero = 0;
long long int var_14 = 109687647671903986LL;
signed char var_15 = (signed char)21;
unsigned long long int var_16 = 8052045641789373745ULL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
