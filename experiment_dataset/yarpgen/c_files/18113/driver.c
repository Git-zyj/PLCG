#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12746883389928752515ULL;
unsigned long long int var_1 = 707647586803535231ULL;
unsigned long long int var_2 = 8596908476033629542ULL;
unsigned long long int var_3 = 11195926441948078248ULL;
unsigned long long int var_4 = 10293174431493094513ULL;
unsigned long long int var_5 = 5948026524880149272ULL;
unsigned long long int var_6 = 15357555315381746694ULL;
unsigned long long int var_7 = 17661993670938108376ULL;
unsigned long long int var_9 = 6962625815143102276ULL;
int zero = 0;
unsigned long long int var_10 = 9961764858675827168ULL;
unsigned long long int var_11 = 10022358701998030104ULL;
unsigned long long int var_12 = 16700072016737505931ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
