#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-22;
signed char var_3 = (signed char)-35;
unsigned char var_5 = (unsigned char)170;
_Bool var_7 = (_Bool)0;
short var_12 = (short)3528;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)91;
unsigned long long int var_15 = 13695670567651046883ULL;
short var_16 = (short)-143;
int zero = 0;
unsigned long long int var_18 = 4302866628092541082ULL;
unsigned int var_19 = 4191829855U;
int var_20 = -1641380106;
unsigned long long int var_21 = 8841352348445910717ULL;
int var_22 = 899755199;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
