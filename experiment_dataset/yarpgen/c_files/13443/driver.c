#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15127964226336807663ULL;
int var_2 = -1844431392;
unsigned int var_3 = 1154209894U;
unsigned long long int var_4 = 8318259283271781412ULL;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)194;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)81;
unsigned long long int var_10 = 1023675775858839904ULL;
long long int var_11 = 9216141302724732278LL;
long long int var_13 = 6886744288248809441LL;
short var_17 = (short)-5018;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 341009024U;
int var_21 = -1858899306;
unsigned char var_22 = (unsigned char)230;
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
