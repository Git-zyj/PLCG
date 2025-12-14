#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4945134543563067618ULL;
unsigned short var_2 = (unsigned short)43524;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 831120572U;
unsigned int var_9 = 1272660750U;
int zero = 0;
int var_10 = -494909358;
unsigned short var_11 = (unsigned short)16295;
long long int var_12 = -7535865265162993180LL;
unsigned long long int var_13 = 10815308320591774887ULL;
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
