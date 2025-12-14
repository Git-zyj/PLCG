#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3259989501832643849ULL;
int var_1 = -1657255480;
int var_3 = -1916432786;
unsigned long long int var_4 = 384500896600327438ULL;
unsigned int var_5 = 786908621U;
long long int var_6 = 1351678245427575074LL;
unsigned char var_7 = (unsigned char)172;
long long int var_8 = 7508468790996368630LL;
unsigned int var_9 = 3950247984U;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)187;
signed char var_13 = (signed char)-55;
void init() {
}

void checksum() {
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
