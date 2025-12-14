#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4170055192U;
long long int var_1 = 6865906431936565893LL;
long long int var_2 = 6528055760744370601LL;
long long int var_3 = 2435095249594267873LL;
unsigned long long int var_5 = 5139927979104599987ULL;
unsigned int var_6 = 3236914789U;
long long int var_7 = -8518202026294856070LL;
long long int var_8 = 4918858503215719373LL;
unsigned char var_9 = (unsigned char)23;
unsigned long long int var_10 = 12213075602604873522ULL;
int zero = 0;
int var_11 = 1663172985;
_Bool var_12 = (_Bool)1;
int var_13 = 1012804572;
unsigned int var_14 = 127030092U;
short var_15 = (short)6215;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
