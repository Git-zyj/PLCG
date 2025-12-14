#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)47235;
long long int var_2 = -5523407516462828920LL;
unsigned int var_5 = 3668128610U;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-2877;
long long int var_8 = -7017539507649904075LL;
signed char var_10 = (signed char)71;
int zero = 0;
unsigned long long int var_11 = 11974110784539693735ULL;
unsigned short var_12 = (unsigned short)23657;
unsigned long long int var_13 = 12856851918472164846ULL;
unsigned char var_14 = (unsigned char)64;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
