#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)153;
unsigned char var_1 = (unsigned char)246;
signed char var_2 = (signed char)117;
long long int var_3 = 8868869760966139957LL;
unsigned char var_4 = (unsigned char)108;
int var_5 = -1889495904;
signed char var_8 = (signed char)-120;
unsigned char var_9 = (unsigned char)124;
int zero = 0;
long long int var_11 = -209499151559316697LL;
int var_12 = -42245758;
unsigned int var_13 = 3003183177U;
int var_14 = 886723900;
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
