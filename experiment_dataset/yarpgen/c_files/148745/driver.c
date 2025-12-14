#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-88;
_Bool var_6 = (_Bool)0;
int var_7 = 84384029;
unsigned int var_8 = 4162087454U;
unsigned long long int var_9 = 2213251113775829312ULL;
signed char var_11 = (signed char)-106;
unsigned long long int var_12 = 3892860343309633791ULL;
unsigned int var_14 = 1181790131U;
int zero = 0;
unsigned int var_15 = 2941848438U;
int var_16 = -309065389;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
