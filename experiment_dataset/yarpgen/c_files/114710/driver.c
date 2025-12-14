#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1900252278;
short var_3 = (short)-10839;
unsigned int var_4 = 3365432017U;
_Bool var_5 = (_Bool)1;
int var_6 = -310538;
unsigned short var_7 = (unsigned short)56869;
long long int var_9 = -7481150420248262289LL;
unsigned short var_10 = (unsigned short)36442;
long long int var_11 = -3740829617235596587LL;
_Bool var_13 = (_Bool)1;
long long int var_15 = 6662589496233046754LL;
int zero = 0;
int var_16 = 525875408;
unsigned short var_17 = (unsigned short)20393;
unsigned int var_18 = 55240073U;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 2700341718U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
