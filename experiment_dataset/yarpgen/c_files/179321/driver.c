#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 505475022;
signed char var_1 = (signed char)13;
unsigned short var_9 = (unsigned short)4392;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)40;
short var_16 = (short)-15742;
_Bool var_17 = (_Bool)0;
long long int var_18 = 63167167132206805LL;
int zero = 0;
long long int var_19 = 3345756781814198755LL;
short var_20 = (short)-17953;
unsigned long long int var_21 = 14418539848510663037ULL;
signed char var_22 = (signed char)-57;
short var_23 = (short)18988;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
