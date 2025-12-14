#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2525508175U;
int var_1 = -586188045;
unsigned char var_3 = (unsigned char)49;
unsigned char var_4 = (unsigned char)71;
int var_5 = -1979574930;
long long int var_6 = -8472533747991860742LL;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-55;
_Bool var_9 = (_Bool)0;
long long int var_10 = -4501052059869454370LL;
unsigned int var_11 = 3831111645U;
int zero = 0;
signed char var_12 = (signed char)-110;
unsigned short var_13 = (unsigned short)40949;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
