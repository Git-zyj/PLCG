#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4106554405U;
unsigned short var_5 = (unsigned short)29595;
short var_6 = (short)4047;
unsigned long long int var_8 = 1405586774222503140ULL;
long long int var_11 = -3820543259867314342LL;
long long int var_12 = 1274061869444154994LL;
int zero = 0;
signed char var_13 = (signed char)94;
unsigned long long int var_14 = 12123461803116937451ULL;
void init() {
}

void checksum() {
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
