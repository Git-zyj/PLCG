#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-10829;
signed char var_3 = (signed char)-16;
signed char var_5 = (signed char)-109;
long long int var_6 = -1616012905526886770LL;
short var_7 = (short)-30495;
short var_8 = (short)4491;
signed char var_10 = (signed char)-104;
signed char var_11 = (signed char)109;
unsigned short var_12 = (unsigned short)9209;
unsigned short var_14 = (unsigned short)49238;
signed char var_15 = (signed char)-126;
short var_18 = (short)-1596;
int zero = 0;
long long int var_19 = -5646038245225101724LL;
short var_20 = (short)4534;
short var_21 = (short)-29961;
unsigned short var_22 = (unsigned short)4822;
long long int var_23 = -8591971610710750774LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
