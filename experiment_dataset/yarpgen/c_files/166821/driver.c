#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4159267426496462386LL;
unsigned long long int var_1 = 11971059455160310956ULL;
unsigned long long int var_8 = 6314722813081515965ULL;
long long int var_9 = -720019485850925555LL;
int var_13 = 885629899;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)1252;
signed char var_21 = (signed char)-28;
unsigned short var_22 = (unsigned short)34546;
void init() {
}

void checksum() {
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
