#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-25;
long long int var_3 = 9068004278087148562LL;
long long int var_6 = -1935322428917272227LL;
unsigned short var_12 = (unsigned short)12260;
int zero = 0;
int var_13 = 958950516;
signed char var_14 = (signed char)60;
long long int var_15 = -6758219858829003170LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
