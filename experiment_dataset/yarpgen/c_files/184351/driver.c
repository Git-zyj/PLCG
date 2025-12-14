#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6783322417023941549LL;
short var_2 = (short)-26117;
unsigned long long int var_4 = 14891927312947887967ULL;
signed char var_9 = (signed char)40;
_Bool var_12 = (_Bool)1;
unsigned char var_15 = (unsigned char)230;
int zero = 0;
unsigned long long int var_18 = 12415992583819364065ULL;
unsigned long long int var_19 = 624779637336928445ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
