#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2491509911038406736LL;
long long int var_1 = -3682325138463832938LL;
signed char var_4 = (signed char)51;
unsigned char var_9 = (unsigned char)216;
_Bool var_19 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)28;
unsigned long long int var_21 = 17409638543703738025ULL;
short var_22 = (short)31186;
void init() {
}

void checksum() {
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
