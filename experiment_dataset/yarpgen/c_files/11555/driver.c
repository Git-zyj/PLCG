#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2681604176561715892LL;
int var_2 = -1321863995;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 1335912613U;
unsigned int var_5 = 3720647692U;
long long int var_6 = -3855993175399769337LL;
int var_10 = 1483566169;
int var_11 = -949664148;
signed char var_13 = (signed char)15;
signed char var_15 = (signed char)21;
short var_16 = (short)1187;
int zero = 0;
int var_17 = 1642473468;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-112;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
