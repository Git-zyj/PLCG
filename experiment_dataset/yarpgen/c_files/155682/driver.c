#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -697968109337487627LL;
unsigned long long int var_2 = 14040563877391498707ULL;
long long int var_3 = 8546697795320041541LL;
unsigned char var_4 = (unsigned char)55;
unsigned int var_9 = 2249945198U;
signed char var_12 = (signed char)-103;
unsigned int var_19 = 2653919772U;
int zero = 0;
signed char var_20 = (signed char)59;
unsigned int var_21 = 3974978610U;
int var_22 = 1081070182;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
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
