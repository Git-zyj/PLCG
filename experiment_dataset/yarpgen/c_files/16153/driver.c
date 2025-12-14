#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4448162613413949813LL;
int var_1 = 822986551;
unsigned short var_2 = (unsigned short)57169;
unsigned char var_3 = (unsigned char)21;
signed char var_5 = (signed char)-62;
unsigned short var_6 = (unsigned short)8665;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-61;
signed char var_9 = (signed char)-67;
int zero = 0;
unsigned short var_10 = (unsigned short)26011;
short var_11 = (short)15344;
signed char var_12 = (signed char)115;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
