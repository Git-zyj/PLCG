#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)101;
unsigned long long int var_2 = 1854896558038704492ULL;
unsigned long long int var_3 = 257536714317684175ULL;
_Bool var_4 = (_Bool)0;
long long int var_5 = -8781785221068953007LL;
long long int var_7 = -4829780342543665735LL;
unsigned char var_8 = (unsigned char)117;
signed char var_9 = (signed char)65;
unsigned int var_10 = 3869041316U;
long long int var_11 = 1422262798786420953LL;
int var_12 = 526847045;
unsigned long long int var_14 = 8403242073886599521ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)53278;
int var_16 = 271205261;
int var_17 = -766497936;
void init() {
}

void checksum() {
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
