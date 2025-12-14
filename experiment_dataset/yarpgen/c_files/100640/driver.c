#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15144079404573852324ULL;
unsigned char var_2 = (unsigned char)98;
long long int var_3 = 1833082403329260135LL;
unsigned char var_4 = (unsigned char)184;
unsigned char var_5 = (unsigned char)180;
unsigned int var_9 = 529942348U;
int zero = 0;
unsigned char var_10 = (unsigned char)114;
long long int var_11 = -2847321493815887328LL;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
