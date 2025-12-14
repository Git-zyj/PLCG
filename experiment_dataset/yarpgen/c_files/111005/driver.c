#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17594;
signed char var_2 = (signed char)83;
unsigned char var_3 = (unsigned char)250;
unsigned long long int var_4 = 15809058546084744011ULL;
unsigned int var_5 = 1805238016U;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)72;
unsigned long long int var_9 = 15623320776609197621ULL;
_Bool var_10 = (_Bool)1;
long long int var_11 = 7528109447482433086LL;
unsigned long long int var_12 = 14505105424996299426ULL;
unsigned char var_13 = (unsigned char)134;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 9554228820247241801ULL;
int zero = 0;
short var_19 = (short)21275;
long long int var_20 = 3584156629543521093LL;
signed char var_21 = (signed char)86;
_Bool var_22 = (_Bool)0;
long long int var_23 = 7461759342161816393LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
