#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-77;
short var_2 = (short)25287;
signed char var_3 = (signed char)-73;
int var_6 = -805535887;
unsigned long long int var_9 = 17298580086126360014ULL;
unsigned char var_13 = (unsigned char)24;
int zero = 0;
signed char var_18 = (signed char)-55;
_Bool var_19 = (_Bool)1;
int var_20 = 1163403661;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
