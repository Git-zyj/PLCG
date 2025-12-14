#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9054614234149456959LL;
long long int var_2 = 4440956017013290822LL;
long long int var_6 = -7156791374978305913LL;
unsigned char var_9 = (unsigned char)243;
long long int var_11 = 4766495365355646632LL;
int var_12 = -1984859327;
int var_14 = -931348586;
int zero = 0;
unsigned int var_18 = 1220812033U;
unsigned int var_19 = 127633786U;
unsigned char var_20 = (unsigned char)29;
short var_21 = (short)-1932;
unsigned int var_22 = 3101146899U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
