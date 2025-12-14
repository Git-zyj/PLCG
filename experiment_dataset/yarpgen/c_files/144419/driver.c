#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)93;
long long int var_3 = -2978497103109425151LL;
unsigned char var_4 = (unsigned char)8;
signed char var_9 = (signed char)26;
unsigned short var_10 = (unsigned short)28844;
int var_11 = 151755052;
short var_16 = (short)1528;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = -4280970877927155484LL;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 14203492055338433860ULL;
long long int var_21 = -9161575089116989566LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
