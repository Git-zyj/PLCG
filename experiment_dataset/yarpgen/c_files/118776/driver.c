#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1369357420248862962LL;
short var_1 = (short)-19418;
unsigned char var_2 = (unsigned char)199;
unsigned int var_3 = 1131109891U;
unsigned short var_5 = (unsigned short)26317;
long long int var_9 = -2190631360462867332LL;
short var_10 = (short)13338;
int zero = 0;
long long int var_11 = 8052098602222372139LL;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)243;
unsigned char var_14 = (unsigned char)163;
unsigned int var_15 = 458452565U;
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
