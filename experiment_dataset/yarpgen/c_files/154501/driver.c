#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3981945712467275624LL;
long long int var_2 = 3600400396884454401LL;
long long int var_3 = 628703555545299653LL;
_Bool var_4 = (_Bool)0;
long long int var_5 = 8677736825130218363LL;
long long int var_7 = 1716508982724039640LL;
long long int var_8 = -476936756545332135LL;
long long int var_9 = 5200069075456875144LL;
long long int var_11 = 6402714073694865934LL;
long long int var_12 = -1315118165525663952LL;
long long int var_13 = 1706069143350843573LL;
long long int var_15 = -8548253594740442772LL;
int zero = 0;
long long int var_17 = 5803695271417793371LL;
long long int var_18 = 5961500427954641326LL;
long long int var_19 = -7081404294676045219LL;
long long int var_20 = -3838857592721418169LL;
void init() {
}

void checksum() {
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
