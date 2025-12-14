#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -720292069;
short var_3 = (short)16388;
signed char var_7 = (signed char)-5;
signed char var_8 = (signed char)-69;
long long int var_9 = 4830869215883396479LL;
int var_10 = 113141447;
int zero = 0;
long long int var_15 = -4382779759250059829LL;
unsigned short var_16 = (unsigned short)2487;
unsigned int var_17 = 3204611648U;
long long int var_18 = -8981463254267872000LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
