#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-65;
unsigned char var_3 = (unsigned char)223;
short var_4 = (short)3035;
unsigned char var_7 = (unsigned char)13;
unsigned long long int var_8 = 15250642496502204823ULL;
unsigned long long int var_9 = 17503679798494674970ULL;
long long int var_11 = 7063148876690135468LL;
long long int var_12 = 4083682052365509132LL;
unsigned char var_13 = (unsigned char)117;
unsigned long long int var_14 = 1814528889710087120ULL;
unsigned char var_15 = (unsigned char)150;
int zero = 0;
unsigned long long int var_20 = 7476096709440013868ULL;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)29;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
