#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)4;
int var_3 = 561645015;
signed char var_4 = (signed char)52;
int var_6 = -1236783702;
int var_7 = 2060599919;
unsigned short var_9 = (unsigned short)60332;
int zero = 0;
int var_11 = 2141513796;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-100;
int var_14 = 339847835;
unsigned char var_15 = (unsigned char)136;
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
