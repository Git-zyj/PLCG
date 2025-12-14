#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13351414043853145460ULL;
unsigned long long int var_3 = 3750656991615711643ULL;
short var_13 = (short)13002;
int zero = 0;
unsigned short var_20 = (unsigned short)59354;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 16139784455366098320ULL;
signed char var_23 = (signed char)-116;
void init() {
}

void checksum() {
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
