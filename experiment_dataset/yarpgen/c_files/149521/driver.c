#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)116;
long long int var_2 = -3157044328010835988LL;
unsigned long long int var_3 = 1813884154615163841ULL;
long long int var_5 = 6947255175838997278LL;
int var_7 = -291144460;
short var_9 = (short)-16613;
long long int var_10 = 5529342851480652138LL;
int zero = 0;
long long int var_11 = 2969979403829819256LL;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
