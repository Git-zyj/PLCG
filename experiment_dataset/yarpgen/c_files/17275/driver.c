#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)197;
signed char var_8 = (signed char)72;
long long int var_9 = -2125961727985579427LL;
unsigned short var_11 = (unsigned short)35014;
unsigned char var_13 = (unsigned char)205;
unsigned short var_14 = (unsigned short)13924;
long long int var_15 = 4457124832922172000LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_19 = (short)-13615;
unsigned long long int var_20 = 7521444818181582890ULL;
int var_21 = -1878782376;
short var_22 = (short)-25377;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
