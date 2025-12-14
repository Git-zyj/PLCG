#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)64110;
unsigned short var_4 = (unsigned short)27123;
unsigned long long int var_5 = 14902833265744794278ULL;
long long int var_6 = -3208875050219968695LL;
long long int var_7 = -4110821954891469493LL;
short var_9 = (short)23111;
signed char var_12 = (signed char)11;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-11;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
