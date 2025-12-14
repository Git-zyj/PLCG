#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 5805114692472187930LL;
_Bool var_7 = (_Bool)0;
unsigned char var_10 = (unsigned char)112;
unsigned char var_11 = (unsigned char)25;
unsigned char var_12 = (unsigned char)159;
int zero = 0;
long long int var_13 = 3576519215328126363LL;
int var_14 = 2027678676;
long long int var_15 = -5707837747708874751LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
