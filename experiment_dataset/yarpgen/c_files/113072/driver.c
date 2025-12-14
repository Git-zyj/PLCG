#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58209;
int var_2 = -2109992618;
signed char var_4 = (signed char)35;
_Bool var_5 = (_Bool)0;
int var_6 = 1752823762;
short var_7 = (short)4608;
short var_9 = (short)13083;
unsigned short var_10 = (unsigned short)57646;
int var_11 = -668416023;
signed char var_12 = (signed char)97;
short var_13 = (short)-30040;
long long int var_14 = 5927300352955523041LL;
unsigned int var_15 = 327005174U;
short var_16 = (short)-32417;
unsigned int var_17 = 1748148115U;
int var_18 = 194511851;
unsigned short var_19 = (unsigned short)10713;
int zero = 0;
long long int var_20 = -802987464453453041LL;
unsigned long long int var_21 = 13685161737296412302ULL;
unsigned int var_22 = 1987786854U;
unsigned long long int var_23 = 230454515321627759ULL;
unsigned int var_24 = 2419208733U;
int var_25 = -1444176220;
unsigned char var_26 = (unsigned char)17;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
