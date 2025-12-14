#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)68;
unsigned long long int var_3 = 17435530748815559020ULL;
signed char var_4 = (signed char)-57;
_Bool var_8 = (_Bool)1;
long long int var_9 = -7878906310218455024LL;
signed char var_11 = (signed char)43;
int var_12 = -298819108;
long long int var_13 = -3214420126832558204LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_17 = 1854073775;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)65;
void init() {
}

void checksum() {
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
