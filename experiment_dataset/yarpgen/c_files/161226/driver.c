#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)48438;
int var_3 = -1163213295;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)22;
int var_9 = 2109139195;
int var_10 = -1161529547;
short var_12 = (short)93;
int var_15 = -2128368873;
long long int var_16 = -9150461783074635923LL;
int zero = 0;
short var_17 = (short)-10063;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-71;
unsigned short var_20 = (unsigned short)6705;
int var_21 = -1171068581;
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
