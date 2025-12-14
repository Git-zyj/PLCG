#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8226384444347379346LL;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 2239419535U;
unsigned short var_3 = (unsigned short)56398;
unsigned int var_5 = 3317202362U;
unsigned short var_6 = (unsigned short)8837;
long long int var_7 = -8477892999680290661LL;
unsigned short var_9 = (unsigned short)26246;
int zero = 0;
signed char var_10 = (signed char)-62;
unsigned long long int var_11 = 2806079986499362735ULL;
_Bool var_12 = (_Bool)1;
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
