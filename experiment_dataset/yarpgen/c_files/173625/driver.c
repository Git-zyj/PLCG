#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8225031607052004240LL;
signed char var_5 = (signed char)-74;
long long int var_6 = 1989999405764093244LL;
_Bool var_7 = (_Bool)1;
long long int var_15 = -5794108146766406260LL;
int zero = 0;
long long int var_19 = -534978711556356156LL;
signed char var_20 = (signed char)38;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
