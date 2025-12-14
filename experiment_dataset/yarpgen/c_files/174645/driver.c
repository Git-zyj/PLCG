#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_5 = (unsigned char)217;
long long int var_7 = 8841613588981917808LL;
unsigned int var_9 = 3179338488U;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned char var_17 = (unsigned char)181;
unsigned short var_18 = (unsigned short)13053;
unsigned long long int var_19 = 1180912929115999301ULL;
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
