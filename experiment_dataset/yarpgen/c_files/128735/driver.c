#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-59;
unsigned int var_6 = 3425033395U;
long long int var_7 = -5319743767909521543LL;
int var_8 = 709952002;
signed char var_9 = (signed char)106;
_Bool var_10 = (_Bool)1;
int var_12 = 1148015627;
_Bool var_14 = (_Bool)1;
unsigned long long int var_16 = 12193543439886542621ULL;
short var_17 = (short)7148;
int zero = 0;
unsigned long long int var_18 = 1352553058944774423ULL;
unsigned long long int var_19 = 17673011519834173880ULL;
int var_20 = 114990744;
unsigned int var_21 = 2935982175U;
long long int var_22 = 7479071517661473684LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
