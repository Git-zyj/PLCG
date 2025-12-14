#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-126;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)238;
int var_12 = 792551587;
short var_14 = (short)25136;
signed char var_15 = (signed char)105;
unsigned long long int var_17 = 16108417570990898736ULL;
int zero = 0;
short var_18 = (short)-18026;
long long int var_19 = 4062706144282794459LL;
unsigned long long int var_20 = 974662305340343854ULL;
int var_21 = -1265612293;
signed char var_22 = (signed char)-87;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
