#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1187611530;
unsigned int var_1 = 4111494801U;
unsigned short var_2 = (unsigned short)34266;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 928628396U;
int var_10 = 348183938;
int var_11 = -1544111095;
int var_12 = 1455167097;
unsigned int var_14 = 1191788166U;
long long int var_18 = -1716940165915691418LL;
int zero = 0;
unsigned long long int var_19 = 6218837526617805028ULL;
unsigned char var_20 = (unsigned char)47;
unsigned long long int var_21 = 10258403156681715093ULL;
unsigned int var_22 = 4144426674U;
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
