#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54297;
long long int var_3 = -7327805364473819914LL;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 431375199U;
unsigned int var_12 = 2154549424U;
unsigned long long int var_14 = 13303477380858073717ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)212;
long long int var_20 = 4901682603094774061LL;
long long int var_21 = -1153941053925867327LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
