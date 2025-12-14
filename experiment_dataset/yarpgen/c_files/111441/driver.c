#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7597257111208686383LL;
unsigned int var_3 = 3497321143U;
long long int var_4 = -3714280895921151486LL;
unsigned char var_9 = (unsigned char)8;
long long int var_10 = 3388793821937788814LL;
unsigned short var_11 = (unsigned short)20929;
unsigned short var_12 = (unsigned short)14144;
long long int var_14 = 3861115413343589259LL;
unsigned char var_15 = (unsigned char)110;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)250;
_Bool var_18 = (_Bool)1;
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
