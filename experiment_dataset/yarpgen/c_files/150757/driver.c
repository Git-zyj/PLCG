#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)7;
long long int var_2 = 659355009704132153LL;
long long int var_4 = 6147877927095165015LL;
signed char var_5 = (signed char)34;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 1224785821U;
unsigned int var_9 = 2887798719U;
unsigned int var_10 = 2312030839U;
signed char var_12 = (signed char)-39;
unsigned short var_14 = (unsigned short)4554;
signed char var_15 = (signed char)14;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)-7;
long long int var_19 = 599082448810245754LL;
signed char var_20 = (signed char)47;
unsigned short var_21 = (unsigned short)13983;
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
