#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)107;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 480875626U;
unsigned long long int var_4 = 2590456906797115622ULL;
signed char var_5 = (signed char)95;
unsigned int var_6 = 2668774196U;
unsigned long long int var_7 = 17663226746659131106ULL;
int var_9 = -1848732620;
long long int var_10 = 2702553686962268008LL;
int zero = 0;
unsigned int var_12 = 2499645694U;
unsigned int var_13 = 3241389457U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
