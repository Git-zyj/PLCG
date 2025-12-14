#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)34;
int var_1 = -494896776;
unsigned long long int var_3 = 8426399303457161399ULL;
unsigned long long int var_7 = 5733784377497102843ULL;
signed char var_8 = (signed char)113;
unsigned long long int var_10 = 3891349797466308129ULL;
int zero = 0;
long long int var_11 = -177766531955241105LL;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
