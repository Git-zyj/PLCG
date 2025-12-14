#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24813;
int var_1 = 1720318137;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)18;
unsigned long long int var_5 = 10587709948006455655ULL;
short var_6 = (short)-2587;
unsigned long long int var_8 = 18199959707918101685ULL;
unsigned char var_9 = (unsigned char)134;
unsigned int var_11 = 1564502249U;
unsigned char var_12 = (unsigned char)63;
signed char var_13 = (signed char)81;
unsigned int var_14 = 3063222606U;
unsigned char var_15 = (unsigned char)27;
int var_16 = 2109910308;
int zero = 0;
unsigned long long int var_17 = 10845156470304959926ULL;
short var_18 = (short)-24280;
unsigned int var_19 = 365520961U;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 1759930880U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
