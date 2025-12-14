#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
short var_3 = (short)-26370;
unsigned short var_4 = (unsigned short)32426;
short var_8 = (short)29805;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)9;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = 5181499185610156062LL;
unsigned long long int var_14 = 8380367209931122777ULL;
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
