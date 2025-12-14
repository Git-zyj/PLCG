#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)57;
_Bool var_1 = (_Bool)0;
int var_2 = 501355975;
unsigned int var_3 = 4030254961U;
unsigned char var_7 = (unsigned char)189;
int var_8 = -53753377;
unsigned long long int var_9 = 15716399791101965025ULL;
unsigned int var_11 = 1064750636U;
int zero = 0;
short var_19 = (short)-10184;
unsigned int var_20 = 1007531501U;
int var_21 = -1725558563;
unsigned char var_22 = (unsigned char)120;
unsigned short var_23 = (unsigned short)9133;
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
