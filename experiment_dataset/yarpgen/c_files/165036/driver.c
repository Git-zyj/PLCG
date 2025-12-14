#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)102;
int var_1 = -1258516069;
unsigned int var_2 = 2336533521U;
unsigned short var_3 = (unsigned short)18520;
signed char var_4 = (signed char)-29;
unsigned short var_6 = (unsigned short)52770;
unsigned short var_7 = (unsigned short)64240;
long long int var_9 = -4745544692538376725LL;
int zero = 0;
unsigned long long int var_11 = 7125498964158226699ULL;
long long int var_12 = 8106434991738662892LL;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 2899300530U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
