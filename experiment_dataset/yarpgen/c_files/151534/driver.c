#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-88;
unsigned short var_3 = (unsigned short)15192;
signed char var_5 = (signed char)-78;
unsigned int var_6 = 2125347123U;
unsigned short var_7 = (unsigned short)21149;
signed char var_8 = (signed char)-22;
unsigned int var_9 = 3827920214U;
unsigned int var_10 = 952654330U;
_Bool var_11 = (_Bool)0;
unsigned int var_17 = 267312914U;
int var_18 = -270896700;
int zero = 0;
unsigned short var_19 = (unsigned short)60816;
unsigned short var_20 = (unsigned short)35675;
short var_21 = (short)-26188;
unsigned int var_22 = 2569348560U;
unsigned long long int var_23 = 17120620955196015939ULL;
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
