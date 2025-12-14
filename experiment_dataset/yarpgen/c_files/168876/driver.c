#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3759636432093377397LL;
int var_1 = -2017486262;
long long int var_3 = 3655549135934197554LL;
signed char var_4 = (signed char)-29;
unsigned short var_5 = (unsigned short)39188;
long long int var_6 = -2517013920952665040LL;
long long int var_7 = -5822512496011001509LL;
long long int var_8 = 398380175801989673LL;
int var_9 = -483248667;
unsigned short var_12 = (unsigned short)45859;
int zero = 0;
int var_13 = 1892217438;
signed char var_14 = (signed char)89;
long long int var_15 = 7821221349878586372LL;
long long int var_16 = 6643424854724848862LL;
unsigned short var_17 = (unsigned short)4131;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
