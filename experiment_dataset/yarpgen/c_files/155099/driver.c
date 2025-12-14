#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 946687117;
unsigned short var_9 = (unsigned short)20036;
unsigned short var_12 = (unsigned short)63662;
signed char var_13 = (signed char)-85;
short var_17 = (short)-9408;
int zero = 0;
unsigned short var_19 = (unsigned short)53460;
long long int var_20 = 5624794222831975364LL;
long long int var_21 = -2585867365172638555LL;
unsigned short var_22 = (unsigned short)53558;
unsigned long long int var_23 = 5289847122506734001ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
