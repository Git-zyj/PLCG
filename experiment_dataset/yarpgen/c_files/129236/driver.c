#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1424693681;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)-34;
signed char var_7 = (signed char)-58;
long long int var_8 = 7236521853477682651LL;
unsigned long long int var_11 = 9295162575351907854ULL;
int zero = 0;
unsigned long long int var_12 = 7230150544258957309ULL;
unsigned long long int var_13 = 13661959587000319457ULL;
int var_14 = 1374915251;
unsigned short var_15 = (unsigned short)63827;
void init() {
}

void checksum() {
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
