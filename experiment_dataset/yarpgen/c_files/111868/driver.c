#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7582626074792380302LL;
int var_2 = 1124999273;
_Bool var_4 = (_Bool)0;
int var_5 = -1288054015;
long long int var_6 = 7048349809717373147LL;
unsigned long long int var_7 = 6351223109563030094ULL;
int var_9 = 452072779;
unsigned long long int var_13 = 9326248961092224497ULL;
unsigned char var_15 = (unsigned char)180;
int zero = 0;
short var_16 = (short)-19891;
short var_17 = (short)14138;
void init() {
}

void checksum() {
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
