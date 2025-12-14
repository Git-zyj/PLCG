#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2778341704U;
unsigned int var_3 = 3938283814U;
unsigned short var_4 = (unsigned short)35931;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-49;
long long int var_8 = 3263209944248763687LL;
short var_9 = (short)31894;
long long int var_11 = 6903810863829095523LL;
unsigned short var_15 = (unsigned short)22538;
int zero = 0;
int var_16 = 35408601;
int var_17 = -961174084;
int var_18 = 1616486107;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
