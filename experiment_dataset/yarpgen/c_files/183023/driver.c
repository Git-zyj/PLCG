#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 91998661;
short var_2 = (short)5784;
_Bool var_4 = (_Bool)0;
int var_5 = -551583320;
unsigned short var_6 = (unsigned short)36987;
unsigned short var_7 = (unsigned short)30219;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = -2004130858763490570LL;
short var_13 = (short)14856;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
