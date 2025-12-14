#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5093970843405425831ULL;
long long int var_9 = -3287189078784758107LL;
_Bool var_10 = (_Bool)1;
int var_14 = -2081844130;
unsigned short var_15 = (unsigned short)18816;
int zero = 0;
long long int var_18 = 1808258318671909142LL;
unsigned int var_19 = 2688093367U;
signed char var_20 = (signed char)-84;
long long int var_21 = 4590986113968504529LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
