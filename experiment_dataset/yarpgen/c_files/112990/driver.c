#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2800127222U;
int var_1 = -1986214531;
int var_2 = -269073626;
signed char var_4 = (signed char)7;
int var_5 = 1108694545;
unsigned short var_6 = (unsigned short)25163;
unsigned long long int var_7 = 11983504689234173156ULL;
unsigned short var_8 = (unsigned short)42080;
long long int var_9 = -5126431764002290078LL;
signed char var_11 = (signed char)-88;
unsigned int var_12 = 1432881187U;
unsigned int var_14 = 2776745066U;
unsigned char var_15 = (unsigned char)47;
unsigned short var_16 = (unsigned short)63579;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = 477476435;
unsigned int var_19 = 3003927915U;
int var_20 = 919914648;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
