#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6200355081462231477ULL;
unsigned long long int var_4 = 12947875234941656709ULL;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)54577;
_Bool var_9 = (_Bool)1;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_16 = (short)12910;
long long int var_17 = 1187158192029374686LL;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-19983;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
