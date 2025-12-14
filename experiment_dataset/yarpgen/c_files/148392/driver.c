#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5433309249473351518ULL;
unsigned long long int var_1 = 8324223399702574586ULL;
unsigned long long int var_3 = 13372296730212700437ULL;
unsigned char var_6 = (unsigned char)172;
_Bool var_8 = (_Bool)1;
int var_9 = 521026500;
unsigned char var_10 = (unsigned char)123;
_Bool var_11 = (_Bool)1;
short var_14 = (short)31636;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_18 = -1070305626;
long long int var_19 = -1483593015308644856LL;
int var_20 = 996874229;
unsigned short var_21 = (unsigned short)50258;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
