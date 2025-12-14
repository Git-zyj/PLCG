#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)83;
signed char var_3 = (signed char)78;
unsigned short var_5 = (unsigned short)62082;
unsigned short var_6 = (unsigned short)49556;
unsigned long long int var_7 = 4628857782326598029ULL;
_Bool var_9 = (_Bool)1;
long long int var_10 = -2595927375001376447LL;
_Bool var_11 = (_Bool)1;
long long int var_14 = 4557401822790161689LL;
unsigned char var_15 = (unsigned char)113;
unsigned long long int var_16 = 2091907113541827087ULL;
signed char var_17 = (signed char)47;
long long int var_18 = 3306335098474229724LL;
int zero = 0;
short var_19 = (short)16921;
signed char var_20 = (signed char)-97;
int var_21 = 1790306462;
unsigned char var_22 = (unsigned char)196;
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
