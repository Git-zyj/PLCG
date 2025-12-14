#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 1176904849;
int var_2 = -1035752816;
unsigned long long int var_3 = 18435922299403110210ULL;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
long long int var_6 = -161289053637808845LL;
signed char var_7 = (signed char)-34;
long long int var_9 = -8723087869085059294LL;
unsigned long long int var_11 = 13576053080864162072ULL;
int zero = 0;
long long int var_12 = -5149510571562206806LL;
signed char var_13 = (signed char)67;
int var_14 = 2102024093;
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
