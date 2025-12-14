#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-113;
unsigned long long int var_2 = 7144749752208148928ULL;
signed char var_4 = (signed char)-72;
long long int var_7 = -6909328659462773419LL;
int var_8 = -378224637;
int zero = 0;
unsigned short var_10 = (unsigned short)10166;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-29375;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
