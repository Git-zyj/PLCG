#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6298170663140662623LL;
unsigned long long int var_2 = 16599249203896870220ULL;
unsigned long long int var_4 = 10012937396327909722ULL;
unsigned long long int var_6 = 14406595939075361390ULL;
int var_7 = 1721559320;
int var_9 = 1016331844;
int zero = 0;
unsigned long long int var_11 = 18420930102977456588ULL;
unsigned long long int var_12 = 8385660282062233543ULL;
unsigned char var_13 = (unsigned char)10;
unsigned long long int var_14 = 12944507176892039616ULL;
signed char var_15 = (signed char)6;
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
