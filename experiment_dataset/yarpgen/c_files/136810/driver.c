#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10164853691959113140ULL;
signed char var_3 = (signed char)-45;
signed char var_4 = (signed char)-91;
short var_5 = (short)-2261;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
long long int var_9 = 5591711997676411272LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-25719;
signed char var_15 = (signed char)-65;
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
