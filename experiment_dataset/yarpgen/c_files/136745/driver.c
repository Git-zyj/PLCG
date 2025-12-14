#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2659907087860664271LL;
unsigned long long int var_2 = 13864567577489888550ULL;
int var_3 = -1668819006;
unsigned long long int var_5 = 18102950260041224187ULL;
int var_7 = 1992083823;
signed char var_9 = (signed char)-33;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = -4667525707542943809LL;
long long int var_12 = 6573714307126791369LL;
unsigned char var_13 = (unsigned char)6;
unsigned long long int var_14 = 7576899796871965370ULL;
unsigned short var_15 = (unsigned short)50168;
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
