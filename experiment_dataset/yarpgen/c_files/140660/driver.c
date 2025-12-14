#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)5;
signed char var_4 = (signed char)-43;
signed char var_5 = (signed char)-127;
long long int var_6 = -1725654801666751026LL;
long long int var_7 = -409415115310727946LL;
short var_9 = (short)-344;
short var_12 = (short)-25648;
unsigned int var_14 = 1218593379U;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_17 = 703445121164797354LL;
signed char var_18 = (signed char)4;
long long int var_19 = 6810471883935628433LL;
void init() {
}

void checksum() {
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
