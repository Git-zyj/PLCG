#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1669;
int var_2 = 786919748;
long long int var_3 = 8547387482445941481LL;
unsigned long long int var_6 = 5278263046909195167ULL;
unsigned short var_9 = (unsigned short)4938;
long long int var_10 = 8239390005466836352LL;
int var_11 = 1814162900;
short var_12 = (short)-20492;
int zero = 0;
unsigned int var_13 = 978150661U;
long long int var_14 = -7682574009820153134LL;
int var_15 = -95026893;
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
