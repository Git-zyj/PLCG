#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2682262694U;
unsigned long long int var_2 = 6971893463445062455ULL;
unsigned long long int var_3 = 9125119816329707723ULL;
signed char var_4 = (signed char)117;
int var_5 = 1902562166;
short var_14 = (short)-19061;
unsigned short var_18 = (unsigned short)57689;
int zero = 0;
unsigned int var_20 = 2055626518U;
unsigned int var_21 = 680435089U;
int var_22 = -1171886285;
unsigned int var_23 = 530212722U;
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
