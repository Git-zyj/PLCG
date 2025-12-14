#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1592670767388211778LL;
_Bool var_3 = (_Bool)1;
long long int var_4 = -8791167752538760406LL;
unsigned int var_7 = 3141881807U;
int var_9 = 137956420;
unsigned char var_10 = (unsigned char)116;
unsigned short var_11 = (unsigned short)9470;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_16 = -2195582096485352817LL;
unsigned char var_17 = (unsigned char)107;
unsigned short var_18 = (unsigned short)53377;
long long int var_19 = 1157089323219211543LL;
unsigned long long int var_20 = 544961958575178779ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
