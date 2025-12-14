#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52466;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)8;
_Bool var_4 = (_Bool)1;
long long int var_7 = 146253715635338720LL;
unsigned long long int var_8 = 2979535906932176563ULL;
unsigned char var_9 = (unsigned char)170;
signed char var_10 = (signed char)-41;
signed char var_11 = (signed char)25;
short var_13 = (short)3418;
unsigned long long int var_16 = 5258515893086276760ULL;
unsigned char var_17 = (unsigned char)239;
int var_18 = 1528154314;
long long int var_19 = 8915192259406627738LL;
int zero = 0;
short var_20 = (short)3497;
unsigned long long int var_21 = 4544641986118529508ULL;
unsigned long long int var_22 = 2479453858942618146ULL;
unsigned long long int var_23 = 15022226753428171176ULL;
void init() {
}

void checksum() {
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
