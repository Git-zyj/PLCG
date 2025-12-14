#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-63;
unsigned char var_1 = (unsigned char)35;
short var_3 = (short)11833;
int var_5 = 1059893567;
int var_7 = 1411490553;
signed char var_9 = (signed char)-57;
int zero = 0;
signed char var_10 = (signed char)-29;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)20099;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
