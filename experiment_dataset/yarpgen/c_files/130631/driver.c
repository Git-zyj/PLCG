#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2828640992749381970LL;
long long int var_2 = -8436806651171426579LL;
long long int var_3 = 2269069606503151772LL;
long long int var_10 = -9220479847185864896LL;
long long int var_14 = -1915323597613160612LL;
int zero = 0;
long long int var_19 = -3624388740373748391LL;
long long int var_20 = -1105597984251411393LL;
long long int var_21 = 5323642090738283341LL;
long long int var_22 = -4166980945210296676LL;
long long int arr_1 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -3104719608723698762LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
