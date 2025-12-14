#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16000952377491688367ULL;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)-22;
unsigned int var_9 = 1456359143U;
int var_17 = 804005665;
unsigned char var_18 = (unsigned char)108;
int zero = 0;
unsigned short var_20 = (unsigned short)38820;
unsigned short var_21 = (unsigned short)48600;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
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
