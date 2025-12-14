#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 498392527;
unsigned short var_3 = (unsigned short)50312;
unsigned long long int var_5 = 734628241780698010ULL;
long long int var_11 = 5527609124101262297LL;
long long int var_13 = 2029595448364181839LL;
int var_16 = -440006690;
int zero = 0;
signed char var_20 = (signed char)-125;
int var_21 = -2124381050;
unsigned long long int var_22 = 6559323550619279797ULL;
int var_23 = -405843368;
int var_24 = 719197186;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
