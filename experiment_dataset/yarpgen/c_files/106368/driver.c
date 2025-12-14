#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)3346;
unsigned short var_4 = (unsigned short)32529;
signed char var_7 = (signed char)105;
int var_8 = 2137719090;
unsigned long long int var_9 = 2050256587758689200ULL;
unsigned short var_11 = (unsigned short)2338;
long long int var_14 = -2075099363102106141LL;
long long int var_15 = 4091562386564217912LL;
unsigned int var_18 = 3689384176U;
int zero = 0;
short var_19 = (short)24856;
_Bool var_20 = (_Bool)1;
int var_21 = -783439311;
unsigned long long int var_22 = 2879284674733649795ULL;
void init() {
}

void checksum() {
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
