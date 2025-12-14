#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1857741897;
unsigned long long int var_1 = 10937245739839588770ULL;
int var_9 = 1017533286;
int zero = 0;
signed char var_18 = (signed char)-83;
_Bool var_19 = (_Bool)0;
int var_20 = -1856484311;
unsigned char var_21 = (unsigned char)142;
int var_22 = -1854560156;
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
