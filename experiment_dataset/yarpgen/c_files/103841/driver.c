#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8412904243144070335LL;
long long int var_3 = -3522993781114121484LL;
long long int var_5 = -5641717161453602866LL;
long long int var_7 = -5411089403083626421LL;
long long int var_9 = -4654827996378702838LL;
long long int var_10 = -8879443035512680572LL;
long long int var_11 = 3172192287545443564LL;
long long int var_12 = 8337022839012951653LL;
int zero = 0;
long long int var_15 = -5191308205554605407LL;
long long int var_16 = 9186121115108117511LL;
void init() {
}

void checksum() {
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
