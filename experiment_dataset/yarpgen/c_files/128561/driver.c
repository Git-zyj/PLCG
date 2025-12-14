#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)103;
unsigned int var_3 = 3064951642U;
unsigned char var_4 = (unsigned char)96;
unsigned long long int var_6 = 8323936138612600858ULL;
long long int var_7 = -5581046221933636515LL;
short var_8 = (short)-5478;
unsigned int var_9 = 141876006U;
_Bool var_10 = (_Bool)0;
int var_11 = 2013648766;
short var_14 = (short)-19377;
int zero = 0;
long long int var_19 = 7100956412174398837LL;
int var_20 = 1946188947;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
