#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16839;
unsigned int var_2 = 4282335324U;
long long int var_5 = 8482799158043869505LL;
unsigned short var_8 = (unsigned short)32974;
int var_9 = -873447744;
long long int var_10 = 2597024914642656169LL;
unsigned short var_13 = (unsigned short)40624;
signed char var_15 = (signed char)-64;
unsigned long long int var_18 = 4548848321030236142ULL;
int zero = 0;
short var_19 = (short)-28627;
unsigned short var_20 = (unsigned short)11803;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)58787;
unsigned short var_23 = (unsigned short)25205;
unsigned short var_24 = (unsigned short)46347;
unsigned char var_25 = (unsigned char)189;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
