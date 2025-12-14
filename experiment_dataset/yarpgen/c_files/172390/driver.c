#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21712;
unsigned long long int var_4 = 3892185465190524185ULL;
short var_5 = (short)7683;
short var_6 = (short)27249;
int var_7 = 2098513824;
unsigned int var_9 = 4136327289U;
unsigned short var_10 = (unsigned short)21067;
unsigned long long int var_11 = 3785423067383852351ULL;
short var_15 = (short)-7388;
int var_16 = 729707995;
int zero = 0;
long long int var_20 = 8379595601293929295LL;
unsigned long long int var_21 = 14725528054414491905ULL;
int var_22 = 827902108;
unsigned long long int var_23 = 32631189875602280ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
