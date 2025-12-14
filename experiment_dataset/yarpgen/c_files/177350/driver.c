#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
signed char var_8 = (signed char)108;
signed char var_9 = (signed char)-106;
unsigned long long int var_11 = 4672006860186727605ULL;
long long int var_12 = 8295929293792736845LL;
int zero = 0;
int var_15 = 976681557;
int var_16 = -1754440888;
unsigned short var_17 = (unsigned short)34741;
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
