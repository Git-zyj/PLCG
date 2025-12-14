#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6197042970297692674LL;
int var_1 = 730709454;
long long int var_2 = -1883794570345149793LL;
unsigned short var_3 = (unsigned short)47196;
long long int var_4 = -6585838158402223183LL;
long long int var_10 = 6255631735267550008LL;
int zero = 0;
long long int var_14 = -230819309564322054LL;
long long int var_15 = -5306735147482707835LL;
unsigned char var_16 = (unsigned char)48;
unsigned long long int var_17 = 15131436518421360750ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
