#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4405006439914845623LL;
unsigned long long int var_2 = 13911153053509929673ULL;
int var_5 = -902326320;
signed char var_6 = (signed char)-94;
unsigned char var_8 = (unsigned char)230;
_Bool var_9 = (_Bool)0;
long long int var_10 = -585586669015926541LL;
int zero = 0;
unsigned int var_12 = 1236306651U;
long long int var_13 = -4066361670060914904LL;
long long int var_14 = -8752775160396982673LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
