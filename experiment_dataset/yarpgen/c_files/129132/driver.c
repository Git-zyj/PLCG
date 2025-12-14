#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4855624451407340833LL;
long long int var_2 = 3845557741339964503LL;
unsigned long long int var_4 = 9057296947333446351ULL;
long long int var_5 = 7323781732097280963LL;
short var_6 = (short)14488;
signed char var_10 = (signed char)-127;
unsigned long long int var_12 = 12888967442841138000ULL;
unsigned char var_13 = (unsigned char)105;
long long int var_14 = -297010887104499611LL;
int var_18 = -1834973690;
int zero = 0;
unsigned char var_20 = (unsigned char)71;
unsigned long long int var_21 = 10141247014332267969ULL;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
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
