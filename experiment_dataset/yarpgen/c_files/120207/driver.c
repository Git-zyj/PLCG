#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)96;
signed char var_2 = (signed char)32;
long long int var_3 = -3561904876854898667LL;
short var_4 = (short)-14305;
unsigned long long int var_6 = 5307528875715920802ULL;
int var_7 = -643402338;
unsigned long long int var_8 = 16114122077765449795ULL;
unsigned short var_9 = (unsigned short)34734;
int zero = 0;
unsigned short var_10 = (unsigned short)16834;
long long int var_11 = -4921105752950245016LL;
unsigned long long int var_12 = 6337436127699095346ULL;
long long int var_13 = -8775047927015504074LL;
unsigned short var_14 = (unsigned short)5171;
unsigned long long int var_15 = 1186845748001257637ULL;
long long int var_16 = -8227363156157125527LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
