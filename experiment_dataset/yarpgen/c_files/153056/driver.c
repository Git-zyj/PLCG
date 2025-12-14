#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)106;
signed char var_3 = (signed char)-86;
int var_11 = -1700155821;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 11668037422324981393ULL;
signed char var_18 = (signed char)-26;
signed char var_19 = (signed char)115;
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
