#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)29512;
unsigned int var_4 = 951947235U;
_Bool var_7 = (_Bool)1;
long long int var_8 = -6016312812391947203LL;
long long int var_9 = -7449008388671060141LL;
int var_11 = -658594148;
long long int var_13 = 182877102661961326LL;
int zero = 0;
signed char var_14 = (signed char)-117;
unsigned long long int var_15 = 15888015249774073560ULL;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-65;
unsigned int var_18 = 2576764282U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
