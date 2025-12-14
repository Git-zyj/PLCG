#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24895;
_Bool var_5 = (_Bool)0;
short var_9 = (short)-17117;
int var_11 = 652865802;
unsigned long long int var_15 = 7275934165097517737ULL;
unsigned long long int var_17 = 12381407884164487536ULL;
int zero = 0;
short var_18 = (short)-22925;
int var_19 = -1550401059;
short var_20 = (short)26906;
signed char var_21 = (signed char)-26;
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
