#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26043;
unsigned long long int var_1 = 8569375017642677199ULL;
short var_2 = (short)25662;
unsigned long long int var_4 = 2351358789951305633ULL;
unsigned long long int var_6 = 13233374248311300775ULL;
unsigned long long int var_8 = 16087470766999080063ULL;
unsigned long long int var_9 = 3725622221813705117ULL;
short var_10 = (short)13278;
int zero = 0;
unsigned long long int var_11 = 13503868411708094182ULL;
unsigned long long int var_12 = 6033568391902669040ULL;
unsigned long long int var_13 = 12335912932058981635ULL;
unsigned long long int var_14 = 12950130897176236746ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
