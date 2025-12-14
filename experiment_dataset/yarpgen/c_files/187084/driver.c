#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1946026264U;
short var_1 = (short)-25792;
int var_2 = 1588993517;
unsigned long long int var_3 = 15644140330406322638ULL;
unsigned char var_5 = (unsigned char)179;
unsigned long long int var_6 = 12441194045958812263ULL;
_Bool var_7 = (_Bool)1;
long long int var_9 = -3257374426850018442LL;
_Bool var_10 = (_Bool)0;
int var_12 = 1744273114;
long long int var_13 = -8528630255701840795LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = -4184458823518257065LL;
unsigned long long int var_16 = 2565284285900909571ULL;
int var_17 = 210265296;
void init() {
}

void checksum() {
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
