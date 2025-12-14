#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2726187486893613012LL;
long long int var_3 = 2242222219087272513LL;
unsigned long long int var_4 = 6755806228215740674ULL;
long long int var_5 = -6995699951696264705LL;
_Bool var_6 = (_Bool)1;
long long int var_8 = 7047509025478114540LL;
short var_9 = (short)-10605;
long long int var_10 = -7636623596686206089LL;
long long int var_11 = -4272416430137294558LL;
long long int var_12 = 703416023626369278LL;
int zero = 0;
unsigned int var_13 = 210290U;
short var_14 = (short)371;
long long int var_15 = 4251106198272971628LL;
long long int var_16 = 6165644925482494567LL;
_Bool var_17 = (_Bool)1;
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
