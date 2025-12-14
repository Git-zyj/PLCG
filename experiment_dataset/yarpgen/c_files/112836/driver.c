#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1182455000;
signed char var_2 = (signed char)23;
short var_4 = (short)27187;
int var_11 = 1841381961;
int var_12 = 173381483;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 1406624550U;
unsigned int var_16 = 2539359940U;
int var_17 = -888194050;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
