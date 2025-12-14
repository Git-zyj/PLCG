#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7151902367030267489LL;
unsigned short var_3 = (unsigned short)40306;
unsigned int var_7 = 3042783423U;
signed char var_9 = (signed char)56;
unsigned short var_10 = (unsigned short)34560;
unsigned int var_13 = 188137676U;
signed char var_14 = (signed char)100;
signed char var_15 = (signed char)66;
unsigned int var_16 = 2760784218U;
unsigned int var_17 = 723431315U;
int zero = 0;
signed char var_18 = (signed char)-39;
unsigned long long int var_19 = 9451094566359794893ULL;
long long int var_20 = -6301596738522195308LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
