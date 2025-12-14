#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1521508327;
unsigned long long int var_4 = 4730679746020518712ULL;
_Bool var_9 = (_Bool)1;
short var_10 = (short)6983;
int var_13 = -885977520;
unsigned long long int var_15 = 9326453568203306065ULL;
short var_16 = (short)23841;
unsigned long long int var_19 = 18395803012320247732ULL;
int zero = 0;
unsigned long long int var_20 = 14677840879582809731ULL;
short var_21 = (short)7916;
void init() {
}

void checksum() {
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
