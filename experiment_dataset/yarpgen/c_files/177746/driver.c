#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3716898827739429891LL;
unsigned short var_2 = (unsigned short)59002;
short var_3 = (short)-2180;
unsigned short var_5 = (unsigned short)61578;
unsigned long long int var_7 = 10337546373326079748ULL;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-8663;
long long int var_11 = -1018027677000551659LL;
int var_12 = -1469138509;
signed char var_14 = (signed char)42;
long long int var_15 = 6504496818593434063LL;
long long int var_16 = -6891145475361895327LL;
short var_17 = (short)8138;
int zero = 0;
unsigned int var_18 = 1965264799U;
short var_19 = (short)-26864;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 5499473650536130486ULL;
void init() {
}

void checksum() {
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
