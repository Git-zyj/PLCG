#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)210;
unsigned short var_2 = (unsigned short)54799;
unsigned short var_5 = (unsigned short)53389;
unsigned int var_9 = 1293814818U;
long long int var_12 = 5672924467550814083LL;
int zero = 0;
long long int var_16 = 1353272227341885210LL;
short var_17 = (short)-24385;
unsigned short var_18 = (unsigned short)43572;
_Bool var_19 = (_Bool)0;
int var_20 = 1769509483;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
