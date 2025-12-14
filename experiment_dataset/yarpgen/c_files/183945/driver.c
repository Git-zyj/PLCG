#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5689567072374841022LL;
unsigned long long int var_3 = 669255317607840053ULL;
unsigned long long int var_8 = 12478665829379205977ULL;
unsigned long long int var_9 = 18163622918816036760ULL;
short var_11 = (short)8758;
int zero = 0;
int var_12 = 425464637;
short var_13 = (short)25391;
unsigned long long int var_14 = 1970666316443800386ULL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 1588784096191576610ULL;
short var_17 = (short)-8319;
long long int var_18 = -3807694539954516119LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
