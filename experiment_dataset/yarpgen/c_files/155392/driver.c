#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -506459756;
signed char var_2 = (signed char)-7;
_Bool var_3 = (_Bool)1;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)38;
short var_9 = (short)-28307;
int var_12 = -1884946058;
unsigned int var_13 = 2035028948U;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)102;
unsigned short var_16 = (unsigned short)13140;
unsigned long long int var_17 = 16798516284273999176ULL;
int var_18 = 1519086834;
long long int var_19 = -3412524515152578560LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
