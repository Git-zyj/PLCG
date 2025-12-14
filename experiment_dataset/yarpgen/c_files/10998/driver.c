#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16945742337391483489ULL;
unsigned long long int var_3 = 3092629605670001445ULL;
long long int var_4 = 7053502435849521477LL;
signed char var_7 = (signed char)-94;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned char var_13 = (unsigned char)68;
unsigned int var_14 = 1793396726U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
