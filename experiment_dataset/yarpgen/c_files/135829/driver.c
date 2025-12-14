#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1423085560;
long long int var_4 = -6014293366354284033LL;
short var_7 = (short)-19593;
long long int var_10 = 8535062822692148591LL;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-28339;
long long int var_14 = 515191476410509416LL;
unsigned long long int var_16 = 16795743122275876374ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)55;
int var_18 = 1328160186;
short var_19 = (short)-29082;
int var_20 = -1128003419;
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
