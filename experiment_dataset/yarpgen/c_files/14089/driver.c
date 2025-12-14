#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1809748717U;
long long int var_1 = -3612006473777702751LL;
long long int var_2 = -1922064358978807325LL;
long long int var_3 = -627006210146139603LL;
long long int var_4 = -8332131013477973542LL;
long long int var_7 = -5942269013139082198LL;
unsigned int var_8 = 25549544U;
unsigned int var_9 = 2823772823U;
int zero = 0;
long long int var_10 = 1024262253465141741LL;
long long int var_11 = 1321265043250107305LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
