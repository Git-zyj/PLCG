#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -845511430;
unsigned short var_3 = (unsigned short)38365;
unsigned long long int var_4 = 5126984083690094408ULL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_12 = 7462815854127222375ULL;
unsigned char var_13 = (unsigned char)95;
long long int var_15 = -4362804116414261098LL;
int zero = 0;
unsigned long long int var_18 = 14756183658696266323ULL;
long long int var_19 = 131937959033399667LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
