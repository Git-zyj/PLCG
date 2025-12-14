#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -631733912;
unsigned long long int var_2 = 14072259234315328374ULL;
long long int var_3 = 4142209128132699494LL;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 3111298104707718516ULL;
signed char var_8 = (signed char)-4;
unsigned long long int var_9 = 7350693136609048009ULL;
int var_10 = 2025056732;
int zero = 0;
unsigned long long int var_11 = 13349870323631507014ULL;
_Bool var_12 = (_Bool)0;
int var_13 = -251087034;
signed char var_14 = (signed char)-102;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
