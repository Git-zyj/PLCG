#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)27;
unsigned int var_3 = 1904211164U;
unsigned int var_4 = 1189634221U;
long long int var_5 = 2650967339793676797LL;
unsigned int var_6 = 1906784865U;
unsigned int var_7 = 3552743800U;
unsigned int var_8 = 1590662683U;
unsigned long long int var_9 = 4276857499788920673ULL;
int zero = 0;
int var_10 = -117918296;
long long int var_11 = 9157231749792583237LL;
unsigned int var_12 = 567473243U;
int var_13 = -835792397;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
